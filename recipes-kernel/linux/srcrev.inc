#
# This file is generated based on:
#     linux-yocto-6.18
#     yocto-kernel-cache
#
# Any manual changes will be overwritten.
#
# This will cause SRCREV_machine:kb-<KBRANCH> take priority over SRCREV_machine:<machine>
MACHINEOVERRIDES .= ":kb-${@oe.utils.conditional('PREFERRED_PROVIDER_virtual/kernel', 'linux-yocto-dev', 'dev-', '', d)}${@d.getVar('KBRANCH', True).replace("/", "-")}"

# linux-yocto-6.18 entries

# linux-yocto-6.18 branch entries
SRCREV_machine:kb-master ?= "7d0a66e4bb9081d75c82ec4957c50034cb0ea449"
LINUX_VERSION:kb-master = "6.18"
SRCREV_machine:kb-v6.18-base ?= "c0d886e4af574740bcffafda40ae692918ca87f9"
LINUX_VERSION:kb-v6.18-base = "6.18.24"
SRCREV_machine:kb-v6.18-standard-arm-versatile-926ejs ?= "36c7eede87754f5077c67b79f86a8110969c3386"
LINUX_VERSION:kb-v6.18-standard-arm-versatile-926ejs = "6.18.24"
SRCREV_machine:kb-v6.18-standard-base ?= "b1ba5428513b52c2bd6acfd3ad0a910f699bc395"
LINUX_VERSION:kb-v6.18-standard-base = "6.18.24"
SRCREV_machine:kb-v6.18-standard-bcm-2xxx-rpi ?= "21225081490f0013d9a5a1b52058d09a1e7a2635"
LINUX_VERSION:kb-v6.18-standard-bcm-2xxx-rpi = "6.18.24"
SRCREV_machine:kb-v6.18-standard-beaglebone ?= "b1ba5428513b52c2bd6acfd3ad0a910f699bc395"
LINUX_VERSION:kb-v6.18-standard-beaglebone = "6.18.24"
SRCREV_machine:kb-v6.18-standard-genericarm64 ?= "b37320d600b3206435a10fa3c3d9fe9a574256b2"
LINUX_VERSION:kb-v6.18-standard-genericarm64 = "6.18.24"
SRCREV_machine:kb-v6.18-standard-mti-malta ?= "ad2c19a65d85f9d6692df0e8684dec63f8a3242f"
LINUX_VERSION:kb-v6.18-standard-mti-malta = "6.18.24"
SRCREV_machine:kb-v6.18-standard-nvidia-soc ?= "a2f78d22d74b36d10268b4bf3a659f4291ab2b59"
LINUX_VERSION:kb-v6.18-standard-nvidia-soc = "6.18.24"
SRCREV_machine:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc ?= "1e88e57943d8041fa7b536899d1a63c8eeb5b533"
LINUX_VERSION:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc = "6.18.24"
SRCREV_machine:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs ?= "0805511f33392bcb1f07e7a6b1bf796bada8865e"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs = "6.18.24"
SRCREV_machine:kb-v6.18-standard-preempt-rt-base ?= "61009d487b66b56d967a7d05e9ef15a05be8ca66"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-base = "6.18.24"
SRCREV_machine:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi ?= "8998ced8e6ae94253e3d9c5b319217fa56253d3b"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi = "6.18.24"
SRCREV_machine:kb-v6.18-standard-preempt-rt-genericarm64 ?= "9656324283a72052242343ed6ac85bbbdd08d325"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-genericarm64 = "6.18.24"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nvidia-soc ?= "ef7df05f8021126606d0429d67f986290087a849"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nvidia-soc = "6.18.24"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc ?= "8b64eac42245bec2f64b754b0134ac106d85816f"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc = "6.18.24"
SRCREV_machine:kb-v6.18-standard-preempt-rt-x86 ?= "4c710d6b74f34525a600f7519f0e348f836bfdb8"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-x86 = "6.18.24"
SRCREV_machine:kb-v6.18-standard-qemuppc ?= "b1ba5428513b52c2bd6acfd3ad0a910f699bc395"
LINUX_VERSION:kb-v6.18-standard-qemuppc = "6.18.24"
SRCREV_machine:kb-v6.18-standard-tiny-arm-versatile-926ejs ?= "a2a4a8af3da957f4e5aa6ea2e8bf81055de0477f"
LINUX_VERSION:kb-v6.18-standard-tiny-arm-versatile-926ejs = "6.18.24"
SRCREV_machine:kb-v6.18-standard-tiny-base ?= "b1ba5428513b52c2bd6acfd3ad0a910f699bc395"
LINUX_VERSION:kb-v6.18-standard-tiny-base = "6.18.24"
SRCREV_machine:kb-v6.18-standard-tiny-x86 ?= "b1ba5428513b52c2bd6acfd3ad0a910f699bc395"
LINUX_VERSION:kb-v6.18-standard-tiny-x86 = "6.18.24"
SRCREV_machine:kb-v6.18-standard-x86 ?= "b1ba5428513b52c2bd6acfd3ad0a910f699bc395"
LINUX_VERSION:kb-v6.18-standard-x86 = "6.18.24"
SRCREV_machine:kb-v6.18-standard-xilinx-zynqmp ?= "b1ba5428513b52c2bd6acfd3ad0a910f699bc395"
LINUX_VERSION:kb-v6.18-standard-xilinx-zynqmp = "6.18.24"

# yocto-kernel-cache entries
KERNEL_CACHE_BRANCH_6.18 = "yocto-6.18"
SRCREV_meta_6.18 = "f94e250f9bd55d855b1a41e3cd72beebb3849ae3"
