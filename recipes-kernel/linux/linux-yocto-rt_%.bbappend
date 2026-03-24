require linux-yocto-wrlinux.inc
include srcrev.inc
require linux-yocto-extra-kernel-src.inc

TARGET_SUPPORTED_KTYPES:append:qemuall = " preempt-rt"

KERNEL_VERSION_SANITY_SKIP ?= "1"

# RT Kernel v6.17+ requires nftables to support iptables.
KERNEL_FEATURES:append = " features/nf_tables/nf_tables.scc"
