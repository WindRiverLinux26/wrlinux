EXTRA_KERNEL_FILES =. "${THISDIR}/linux-yocto:"
EXTRA_KERNEL_SRC_URI += " \
    file://0001-tools-build-make-in-target-rule-robust-against-too-l.patch \
    file://0001-gcc-plugins-Make-host-paths-not-leak-for-out-of-tree.patch \
"

# For the moment, amd-zynqmp temporarily uses v6.12 which requires a specific
# version of 0001-gcc-plugins-Make-host-paths-not-leak-for-out-of-tree.patch
# which needs to be removed later when amd-zynqmp switches to v6.18.
EXTRA_KERNEL_SRC_URI:remove:amd-zynqmp = " \
    file://0001-gcc-plugins-Make-host-paths-not-leak-for-out-of-tree.patch \
"

EXTRA_KERNEL_SRC_URI:append:amd-zynqmp = " \
    file://0001-gcc-plugins-6.12-Make-host-paths-not-leak-for-out-of.patch \
"

EXTRA_KERNEL_SRC_URI:append:bcm-2xxx-rpi4 = " \
    file://0001-Revert-Revert-mmc-sdhci-Mask-spurious-interrupts.patch \
"

FILESEXTRAPATHS:prepend:osv-wrlinux := "${EXTRA_KERNEL_FILES}:"
SRC_URI:append:osv-wrlinux = " ${EXTRA_KERNEL_SRC_URI}"
