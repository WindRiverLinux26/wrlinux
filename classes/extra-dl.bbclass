addhandler wrl_set_dl_handler
wrl_set_dl_handler[eventmask] = "bb.event.RecipePreFinalise"

EXTRA_FETCH_LAYERS ??= ""
python wrl_set_dl_handler() {
    recipe = d.getVar("FILE")
    extra_layers = d.getVar('EXTRA_FETCH_LAYERS').split()
    skip = True
    # Only fetch the recipes in EXTRA_FETCH_LAYERS to accelerate the build
    for extra in extra_layers:
        extra_str = '/%s/' % extra
        if extra_str in recipe:
            skip = False
            break
    if skip:
        d.setVarFlag('do_fetch', 'noexec', '1')

    bitbakepath = d.getVar('BITBAKEPATH')
    layers_prefix = os.path.dirname(os.path.dirname(os.path.dirname(bitbakepath)))
    dl_name = recipe.replace(layers_prefix, '')
    if dl_name:
        dl_name = dl_name.split('/')[1] + '-dl'
        dl_dir = d.getVar('DL_DIR')
        dl_dir = os.path.join(dl_dir, dl_name, 'downloads')
        d.setVar('DL_DIR', dl_dir)

}
