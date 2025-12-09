#!/usr/bin/env python3

import os
import sys
import argparse
import shutil
import re
from collections import OrderedDict

# Converting rules as an ordered dict - ANY_VARIABLE rules come last
CONVERTING_RULES = OrderedDict([
    ("WRTEMPLATE_CLASSES += '", "USER_CLASSES:append = ' "),
    ('WRTEMPLATE_CLASSES += "', 'USER_CLASSES:append = " '),
    ("WRTEMPLATE_CLASSES", "USER_CLASSES"),
    ('ANY_VARIABLE += "', 'ANY_VARIABLE:append = " '),
    ("ANY_VARIABLE += '", "ANY_VARIABLE:append = ' "),
])

def ensure_newline(filepath):
    """Ensure file ends with a newline."""
    try:
        with open(filepath, 'r+', encoding='utf-8') as f:
            content = f.read()
            if content and not content.endswith('\n'):
                f.write('\n')
    except Exception as e:
        print(f"Warning: Could not ensure newline for {filepath}: {e}")

def convert_line(line, srcfile_path, debug=False, template_path=None):
    """Convert a single line using the converting rules."""
    original_line = line.rstrip('\n')
    converted_line = original_line

    # Track if we applied any conversion for debug output
    applied_conversion = False
    debug_orig_line = original_line
    debug_conv_line = converted_line

    # Apply all converting rules in order
    for pattern, replacement in CONVERTING_RULES.items():
        # For ANY_VARIABLE rules, we need to detect if the line matches the pattern
        # by checking if there's a variable at the beginning with += " or += '
        if pattern.startswith("ANY_VARIABLE"):
            # Check if this line has a variable assignment with += " or += '
            var_pattern = r'^(\w+)\s*\+=\s*'
            var_match = re.match(var_pattern, converted_line.strip())

            if var_match:
                var_name = var_match.group(1)
                # Check which quote type is used
                if ' += "' in converted_line and pattern == 'ANY_VARIABLE += "':
                    # Replace ANY_VARIABLE with the actual variable name
                    actual_replacement = replacement.replace("ANY_VARIABLE", var_name)
                    # Replace the pattern in the line (with the actual variable name)
                    old_pattern = f'{var_name} += "'
                    new_pattern = f'{var_name}:append = " '
                    if old_pattern in converted_line:
                        converted_line = converted_line.replace(old_pattern, new_pattern)
                        applied_conversion = True
                        debug_conv_line = converted_line

                elif " += '" in converted_line and pattern == "ANY_VARIABLE += '":
                    # Replace ANY_VARIABLE with the actual variable name
                    actual_replacement = replacement.replace("ANY_VARIABLE", var_name)
                    # Replace the pattern in the line (with the actual variable name)
                    old_pattern = f"{var_name} += '"
                    new_pattern = f"{var_name}:append = ' "
                    if old_pattern in converted_line:
                        converted_line = converted_line.replace(old_pattern, new_pattern)
                        applied_conversion = True
                        debug_conv_line = converted_line
        else:
            # For non-ANY_VARIABLE rules, just check if pattern is in the line
            if pattern in converted_line:
                converted_line = converted_line.replace(pattern, replacement)
                applied_conversion = True
                debug_conv_line = converted_line
        # Handle /templates/ value
        if re.search(r"=.*/templates/", converted_line):
            converted_line = converted_line.replace("/templates/", "/conf/fragments/")
            applied_conversion = True
            debug_conv_line = converted_line

    # Output debug information if a conversion was applied
    if debug and applied_conversion and template_path:
        print(f"\tsrcfile: {srcfile_path}")
        print(f"\torig_line: {debug_orig_line}")
        print(f"\tconverted_line: {debug_conv_line}\n")

    return converted_line + '\n'

def merge_files(src_files, dst_file, template_path=None, debug=False):
    """Merge source files into destination file with conversion."""
    try:
        with open(dst_file, 'w', encoding='utf-8') as dst:
            for src_file in src_files:
                if os.path.exists(src_file):
                    ensure_newline(src_file)
                    with open(src_file, 'r', encoding='utf-8') as src:
                        for line in src:
                            converted = convert_line(line, src_file, debug, template_path)
                            dst.write(converted)
                elif debug:
                    print(f"Note: Source file {src_file} does not exist")
    except Exception as e:
        print(f"Error merging files to {dst_file}: {e}")

def process_template(template_dir, layerpath, debug=False):
    """Process a single template directory."""
    # Get relative path from templates directory
    rel_path = os.path.relpath(template_dir, os.path.join(layerpath, 'templates'))

    # Destination path under conf/fragments
    dest_dir = os.path.join(layerpath, 'conf', 'fragments', rel_path)

    # Create destination directory
    os.makedirs(dest_dir, exist_ok=True)

    # Store original template path for debug output
    original_template_path = template_dir

    # Move the entire template directory
    if os.path.exists(dest_dir):
        # Remove existing directory if it exists
        shutil.rmtree(dest_dir)
    shutil.move(template_dir, dest_dir)

    # Update paths after move
    moved_dir = dest_dir
    template_name = os.path.basename(moved_dir)

    # File paths in the moved directory
    template_conf = os.path.join(moved_dir, 'template.conf')
    image_inc = os.path.join(moved_dir, 'image.inc')
    bsp_pkgs_conf = os.path.join(moved_dir, 'bsp-pkgs.conf')
    bsp_pkgs_inc = os.path.join(moved_dir, 'bsp-pkgs.inc')

    # Create merged files
    # 1. template_name.conf from template.conf and image.inc
    if os.path.exists(template_conf) or os.path.exists(image_inc):
        dst_file = os.path.join(moved_dir, f"{template_name}.conf")
        src_files = [template_conf, image_inc]
        merge_files(src_files, dst_file, original_template_path, debug)

        # Remove original files if they exist
        for f in [template_conf, image_inc]:
            if os.path.exists(f):
                os.remove(f)

    # 2. bsp.conf from bsp-pkgs.conf and bsp-pkgs.inc
    if os.path.exists(bsp_pkgs_conf) or os.path.exists(bsp_pkgs_inc):
        dst_file = os.path.join(moved_dir, "bsp.conf")
        src_files = [bsp_pkgs_conf, bsp_pkgs_inc]
        merge_files(src_files, dst_file, original_template_path, debug)

        # Remove original files if they exist
        for f in [bsp_pkgs_conf, bsp_pkgs_inc]:
            if os.path.exists(f):
                os.remove(f)

    return moved_dir

def find_templates(layerpath):
    """Find template directories in layerpath/templates."""
    templates_dir = os.path.join(layerpath, 'templates')
    templates = []

    if not os.path.exists(templates_dir):
        return templates

    # Walk through templates directory
    for root, dirs, files in os.walk(templates_dir):
        # Check if this directory contains any template files
        template_files = {'README', 'template.conf', 'image.inc', 'bsp-pkgs.inc', 'bsp-pkgs.conf'}
        if any(file in files for file in template_files):
            templates.append(root)
            # Don't look deeper into this directory since it's already a template
            dirs.clear()
        else:
            # Continue searching in subdirectories
            continue

    return templates

def process_layer(layerpath, debug=False):
    """Process all templates in a layer."""
    print(f"Processing layer: {layerpath}")

    # Find all templates
    templates = find_templates(layerpath)

    if not templates:
        print(f"No templates found in {layerpath}")
        return

    print(f"Found {len(templates)} template(s)")

    # Process each template
    for template_dir in templates:
        print(f"Processing template: {template_dir}")
        new_dir = process_template(template_dir, layerpath, debug)
        print(f"  Moved to: {new_dir}")

    # Clean up empty directories in templates
    templates_root = os.path.join(layerpath, 'templates')
    if os.path.exists(templates_root):
        # Remove empty directories
        for root, dirs, files in os.walk(templates_root, topdown=False):
            for dir_name in dirs:
                dir_path = os.path.join(root, dir_name)
                try:
                    if not os.listdir(dir_path):
                        os.rmdir(dir_path)
                except OSError:
                    pass  # Directory not empty or other error
        if not os.listdir(templates_root):
            try:
                os.rmdir(templates_root)
            except OSError:
                pass

def main():
    parser = argparse.ArgumentParser(
        description="Convert templates to fragments with configuration conversion"
    )
    parser.add_argument(
        'layers',
        nargs='+',
        help='One or more layer paths to process'
    )
    parser.add_argument(
        '--debug',
        action='store_true',
        help='Enable debug output showing conversion details'
    )

    args = parser.parse_args()

    # Process each layer
    for layerpath in args.layers:
        # Validate layer path
        if not os.path.exists(layerpath):
            print(f"Error: Layer path '{layerpath}' does not exist", file=sys.stderr)
            sys.exit(1)

        # Check if templates directory exists
        templates_dir = os.path.join(layerpath, 'templates')
        if not os.path.exists(templates_dir):
            print(f"Warning: No templates directory found in {layerpath}")
            continue

        # Create conf/fragments directory if it doesn't exist
        fragments_dir = os.path.join(layerpath, 'conf', 'fragments')
        os.makedirs(fragments_dir, exist_ok=True)

        # Process the layer
        try:
            process_layer(layerpath, args.debug)
        except Exception as e:
            print(f"Error processing layer {layerpath}: {e}", file=sys.stderr)
            if args.debug:
                import traceback
                traceback.print_exc()

    print("Conversion completed.")

if __name__ == "__main__":
    main()
