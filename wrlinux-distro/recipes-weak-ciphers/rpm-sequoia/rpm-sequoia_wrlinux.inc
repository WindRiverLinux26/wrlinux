#
# Copyright (C) 2026 - 2027 Wind River Systems, Inc.
#

FILESEXTRAPATHS:prepend := "${THISDIR}/rpm-sequoia:"

SRC_URI:append = " file://0001-sequoia-openpgp-fix-rpm-compile-error-when-openssl-d.patch;patchdir=${CARGO_HOME}/bitbake/sequoia-openpgp-2.2.0 "

RUSTFLAGS:append = " ${@bb.utils.contains('DISTRO_FEATURES', 'openssl-no-weak-ciphers', '--cfg osslconf=\\\"OPENSSL_NO_DES\\\"', '', d)}"
