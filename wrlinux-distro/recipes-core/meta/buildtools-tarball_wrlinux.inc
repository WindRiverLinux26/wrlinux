# Force the name, we don't want ?= or our SDK naming will be used.
TOOLCHAIN_OUTPUTNAME:osv-wrlinux = "${SDK_ARCH}-${BUILDTOOLS}-nativesdk-standalone-${DISTRO_VERSION}"

TOOLCHAIN_HOST_TASK:append:osv-wrlinux = " \
      nativesdk-python3-jinja2 \
      nativesdk-libgcc \
      nativesdk-openssh-ssh \
     "

# use anspass to save and retrieve credentials
TOOLCHAIN_HOST_TASK:append:osv-wrlinux = " nativesdk-anspass"

# Provide git lfs
TOOLCHAIN_HOST_TASK:append:osv-wrlinux = " nativesdk-git-lfs"

# Provide wic tools
TOOLCHAIN_HOST_TASK:append:osv-wrlinux = " nativesdk-wic"

# For meta-footprint
TOOLCHAIN_HOST_TASK:append:osv-wrlinux = " \
    nativesdk-python3-cssselect2 \
    nativesdk-python3-graphviz \
    nativesdk-python3-reportlab \
    nativesdk-python3-svglib \
    nativesdk-python3-tinycss2 \
"

SDK_POSTPROCESS_COMMAND:prepend:osv-wrlinux = " gen_buildtools_delete_target ;"

gen_buildtools_delete_target() {
	rm -rf ${SDK_OUTPUT}/${SDKTARGETSYSROOT}
}

do_build[recrdeptask] = "do_build"
