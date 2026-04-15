# PACKAGECONFIG settings of recipes for WRLinux

# we usually use gnutls as the default PACKAGECONFIG of wpa-supplicant, but its sub-packege gnutls-openssl
# is GPLv3, so need this check to switch to openssl if GLPv3 is blacklisted.
PACKAGECONFIG:pn-wpa-supplicant ?= "${@bb.utils.contains('INCOMPATIBLE_LICENSE', 'GPL-3.0-only', 'openssl', 'gnutls', d)}"

PACKAGECONFIG:pn-sysstat ?= "${@bb.utils.filter('DISTRO_FEATURES', 'systemd', d)} lm-sensors cron"

PACKAGECONFIG:append:pn-mesa-demos = "${@bb.utils.contains('DISTRO_FEATURES', 'weston-demo', ' wayland ', ' ', d)}"

# For RT Kernel v6.17+ iptables requires libnftnl
PACKAGECONFIG:append:pn-iptables = " ${@bb.utils.contains('PREFERRED_PROVIDER_virtual/kernel', 'linux-yocto-rt', ' libnftnl', '', d)}"
