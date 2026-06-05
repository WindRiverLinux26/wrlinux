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
SRCREV_machine:kb-v6.18-base ?= "18ad16ce4a6b2714583fd1e1044c6ea8e53b3519"
LINUX_VERSION:kb-v6.18-base = "6.18.34"
SRCREV_machine:kb-v6.18-standard-arm-versatile-926ejs ?= "1fa8e29233b43f22ce5dd26e3bc08ad79784a7ca"
LINUX_VERSION:kb-v6.18-standard-arm-versatile-926ejs = "6.18.34"
SRCREV_machine:kb-v6.18-standard-base ?= "9b4e099993ff056f132851e3d3ff67550e0e9090"
LINUX_VERSION:kb-v6.18-standard-base = "6.18.34"
SRCREV_machine:kb-v6.18-standard-bcm-2xxx-rpi ?= "a07c3c469bcd5b17ca083ee5c40eeddd1e309da0"
LINUX_VERSION:kb-v6.18-standard-bcm-2xxx-rpi = "6.18.34"
SRCREV_machine:kb-v6.18-standard-beaglebone ?= "9b4e099993ff056f132851e3d3ff67550e0e9090"
LINUX_VERSION:kb-v6.18-standard-beaglebone = "6.18.34"
SRCREV_machine:kb-v6.18-standard-genericarm64 ?= "3bf75f8b9c97212d54aac12c3575b42cc504b4d8"
LINUX_VERSION:kb-v6.18-standard-genericarm64 = "6.18.34"
SRCREV_machine:kb-v6.18-standard-mchp-sdk-6.18-microchip-riscv ?= "c94083dbb64fb5d5b258bdcf36e427e9fe6e600a"
LINUX_VERSION:kb-v6.18-standard-mchp-sdk-6.18-microchip-riscv = "6.18.34"
SRCREV_machine:kb-v6.18-standard-mti-malta ?= "febb2026f585a98f7573ae013b10cf81ca0ecd59"
LINUX_VERSION:kb-v6.18-standard-mti-malta = "6.18.34"
SRCREV_machine:kb-v6.18-standard-nvidia-soc ?= "133040bac59ee0ccac098acda037a6c3af200194"
LINUX_VERSION:kb-v6.18-standard-nvidia-soc = "6.18.34"
SRCREV_machine:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc ?= "65fe396f5cb269619d1efa0ad659775a2cc73098"
LINUX_VERSION:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc = "6.18.34"
SRCREV_machine:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs ?= "dbf3b926b323ea72af10979bbb7fb8dedfc24dbb"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs = "6.18.34"
SRCREV_machine:kb-v6.18-standard-preempt-rt-base ?= "70ee73bc5040b0150d134f5830dcbb83f8f550f6"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-base = "6.18.34"
SRCREV_machine:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi ?= "488b2c346f4535c8abe0f1363cb411cec5da93e2"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi = "6.18.34"
SRCREV_machine:kb-v6.18-standard-preempt-rt-genericarm64 ?= "d9b25dac99fc12c4fa33d7c53ed819d1671e07fd"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-genericarm64 = "6.18.34"
SRCREV_machine:kb-v6.18-standard-preempt-rt-mchp-sdk-6.18-microchip-riscv ?= "7aa87bb310d7dc0cbe76cc75a1025dcebcb9d4a5"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-mchp-sdk-6.18-microchip-riscv = "6.18.34"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nvidia-soc ?= "a51ef4a46ae51fc6f354caa0cf0bea1ce7eaf47a"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nvidia-soc = "6.18.34"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc ?= "79e1293b2c21b1b1d2f2893eb6d5e0173d8fba59"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc = "6.18.34"
SRCREV_machine:kb-v6.18-standard-preempt-rt-x86 ?= "7a526286a992735bfbeed73890d9bd6dcfd0a5e0"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-x86 = "6.18.34"
SRCREV_machine:kb-v6.18-standard-preempt-rt-xlnx-soc ?= "79eba8db5a61b49a66571cf5f2059613bd0f34e3"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-xlnx-soc = "6.18.34"
SRCREV_machine:kb-v6.18-standard-qemuppc ?= "9b4e099993ff056f132851e3d3ff67550e0e9090"
LINUX_VERSION:kb-v6.18-standard-qemuppc = "6.18.34"
SRCREV_machine:kb-v6.18-standard-tiny-arm-versatile-926ejs ?= "fc3683788eb0a9c0c6733ff09907eab83d786ba2"
LINUX_VERSION:kb-v6.18-standard-tiny-arm-versatile-926ejs = "6.18.34"
SRCREV_machine:kb-v6.18-standard-tiny-base ?= "9b4e099993ff056f132851e3d3ff67550e0e9090"
LINUX_VERSION:kb-v6.18-standard-tiny-base = "6.18.34"
SRCREV_machine:kb-v6.18-standard-tiny-x86 ?= "9b4e099993ff056f132851e3d3ff67550e0e9090"
LINUX_VERSION:kb-v6.18-standard-tiny-x86 = "6.18.34"
SRCREV_machine:kb-v6.18-standard-x86 ?= "9b4e099993ff056f132851e3d3ff67550e0e9090"
LINUX_VERSION:kb-v6.18-standard-x86 = "6.18.34"
SRCREV_machine:kb-v6.18-standard-xilinx-zynqmp ?= "9b4e099993ff056f132851e3d3ff67550e0e9090"
LINUX_VERSION:kb-v6.18-standard-xilinx-zynqmp = "6.18.34"
SRCREV_machine:kb-v6.18-standard-xlnx-soc ?= "44e01729a15a2f3e0e7bc4db99e038a8e2fddb1e"
LINUX_VERSION:kb-v6.18-standard-xlnx-soc = "6.18.34"

# yocto-kernel-cache entries
KERNEL_CACHE_BRANCH_6.18 = "yocto-6.18"
SRCREV_meta_6.18 = "6d012fbc35201ba081efcc19c9519c1dc7b64c43"
