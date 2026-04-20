#
# Copyright (C) 2025 Wind River Systems, Inc.
#

PACKAGECONFIG:append:osv-wrlinux = " vhost"

# Create the symlink /usr/bin/kvm -> /usr/bin/qemu-system-${arch}
do_install:append () {
    cd ${D}${bindir}
    arch=`echo ${TARGET_ARCH} | sed 's/i[456]86/i386/' | sed 's/powerpc/ppc/'`
    ln -sf qemu-system-${arch} kvm
}
