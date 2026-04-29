# Force the name, we don't want ?= or our SDK naming will be used.
TOOLCHAIN_OUTPUTNAME:osv-wrlinux = "${SDK_ARCH}-${BUILDTOOLS}-nativesdk-standalone-${DISTRO_VERSION}"

# use anspass to save and retrieve credentials
# Provide git lfs
# Provide wic tools
TOOLCHAIN_HOST_TASK_EXTRA ?= " \
    nativesdk-python3-jinja2 \
    nativesdk-libgcc \
    nativesdk-openssh-ssh \
    nativesdk-anspass \
    nativesdk-git-lfs \
    nativesdk-wic \
    ${TOOLCHAIN_HOST_TASK_FOOTPRINT} \
"

# For meta-footprint
TOOLCHAIN_HOST_TASK_FOOTPRINT = " \
    nativesdk-python3-cssselect2 \
    nativesdk-python3-graphviz \
    nativesdk-python3-reportlab \
    nativesdk-python3-svglib \
    nativesdk-python3-tinycss2 \
"

TOOLCHAIN_HOST_TASK:append:osv-wrlinux = " ${TOOLCHAIN_HOST_TASK_EXTRA}"
SDK_POSTPROCESS_COMMAND:prepend:osv-wrlinux = " gen_buildtools_delete_target ;"

gen_buildtools_delete_target() {
	rm -rf ${SDK_OUTPUT}/${SDKTARGETSYSROOT}
}

do_build[recrdeptask] = "do_build"
