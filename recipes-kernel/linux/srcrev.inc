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
SRCREV_machine:kb-v6.18-base ?= "c31b94a4231c974dca12e6b83f2af1d1d95dfc5e"
LINUX_VERSION:kb-v6.18-base = "6.18.28"
SRCREV_machine:kb-v6.18-standard-arm-versatile-926ejs ?= "3f4d05e9da100380b042f317240ef81262ed1574"
LINUX_VERSION:kb-v6.18-standard-arm-versatile-926ejs = "6.18.28"
SRCREV_machine:kb-v6.18-standard-base ?= "ed7dda90e9cbe47b9a234a82c41be27d624f7ee7"
LINUX_VERSION:kb-v6.18-standard-base = "6.18.28"
SRCREV_machine:kb-v6.18-standard-bcm-2xxx-rpi ?= "6f74d7650ddc167688939c667f0a24fde16c1f7a"
LINUX_VERSION:kb-v6.18-standard-bcm-2xxx-rpi = "6.18.28"
SRCREV_machine:kb-v6.18-standard-beaglebone ?= "ed7dda90e9cbe47b9a234a82c41be27d624f7ee7"
LINUX_VERSION:kb-v6.18-standard-beaglebone = "6.18.28"
SRCREV_machine:kb-v6.18-standard-genericarm64 ?= "5cd75b0b5da06045acdd0c66e50656ab82cb880f"
LINUX_VERSION:kb-v6.18-standard-genericarm64 = "6.18.28"
SRCREV_machine:kb-v6.18-standard-mti-malta ?= "1258fd6468220521e93f76f1cbd078eb4e2a4835"
LINUX_VERSION:kb-v6.18-standard-mti-malta = "6.18.28"
SRCREV_machine:kb-v6.18-standard-nvidia-soc ?= "cbe8ed18e0af6e0f1b857dcfa991ec4d3bdcfad5"
LINUX_VERSION:kb-v6.18-standard-nvidia-soc = "6.18.28"
SRCREV_machine:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc ?= "f0d77a64a33bb62b73289c5d04dd0c0d31887c95"
LINUX_VERSION:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs ?= "fef755b86d21f9af8087944a4495df18cd32229d"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-base ?= "67f352d4d0901a3c3c2cb2cbecd23c66c793e860"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-base = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi ?= "e37e6f13739c5357bfd6ddc751fd8ebc4359c66d"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-genericarm64 ?= "01b227d58fa43a69f115ee76bba664e9039334e5"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-genericarm64 = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nvidia-soc ?= "314f468e16bd2a139227c61e4ba0ed7f56d2d9a5"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nvidia-soc = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc ?= "ed1e80dddfc03c01dcc4fc2938253660a19a4827"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-x86 ?= "4e03b28425442085a1f593ba6be62bacb1b556f1"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-x86 = "6.18.28"
SRCREV_machine:kb-v6.18-standard-qemuppc ?= "ed7dda90e9cbe47b9a234a82c41be27d624f7ee7"
LINUX_VERSION:kb-v6.18-standard-qemuppc = "6.18.28"
SRCREV_machine:kb-v6.18-standard-tiny-arm-versatile-926ejs ?= "dce48c77a478542130948d4f2fa1329af4d2dec6"
LINUX_VERSION:kb-v6.18-standard-tiny-arm-versatile-926ejs = "6.18.28"
SRCREV_machine:kb-v6.18-standard-tiny-base ?= "ed7dda90e9cbe47b9a234a82c41be27d624f7ee7"
LINUX_VERSION:kb-v6.18-standard-tiny-base = "6.18.28"
SRCREV_machine:kb-v6.18-standard-tiny-x86 ?= "ed7dda90e9cbe47b9a234a82c41be27d624f7ee7"
LINUX_VERSION:kb-v6.18-standard-tiny-x86 = "6.18.28"
SRCREV_machine:kb-v6.18-standard-x86 ?= "ed7dda90e9cbe47b9a234a82c41be27d624f7ee7"
LINUX_VERSION:kb-v6.18-standard-x86 = "6.18.28"
SRCREV_machine:kb-v6.18-standard-xilinx-zynqmp ?= "ed7dda90e9cbe47b9a234a82c41be27d624f7ee7"
LINUX_VERSION:kb-v6.18-standard-xilinx-zynqmp = "6.18.28"

# yocto-kernel-cache entries
KERNEL_CACHE_BRANCH_6.18 = "yocto-6.18"
SRCREV_meta_6.18 = "127f83ad4e21b6663d72fceba80bfb945c21e4f0"
