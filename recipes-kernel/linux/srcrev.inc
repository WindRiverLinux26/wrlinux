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
SRCREV_machine:kb-v6.18-base ?= "52386a7b1beb0a7cb5a304935f73c157109c09ad"
LINUX_VERSION:kb-v6.18-base = "6.18.32"
SRCREV_machine:kb-v6.18-standard-arm-versatile-926ejs ?= "ab16c590f189a534ded2f3940529d3ac63301c3a"
LINUX_VERSION:kb-v6.18-standard-arm-versatile-926ejs = "6.18.32"
SRCREV_machine:kb-v6.18-standard-base ?= "8b43828d68f73df49a408e5bba88eade55b0ca09"
LINUX_VERSION:kb-v6.18-standard-base = "6.18.32"
SRCREV_machine:kb-v6.18-standard-bcm-2xxx-rpi ?= "109434226aa8693807e007df6af1cc8be2664b83"
LINUX_VERSION:kb-v6.18-standard-bcm-2xxx-rpi = "6.18.32"
SRCREV_machine:kb-v6.18-standard-beaglebone ?= "8b43828d68f73df49a408e5bba88eade55b0ca09"
LINUX_VERSION:kb-v6.18-standard-beaglebone = "6.18.32"
SRCREV_machine:kb-v6.18-standard-genericarm64 ?= "3acde948b7470a96df7e730a2119ffaee380d6b1"
LINUX_VERSION:kb-v6.18-standard-genericarm64 = "6.18.32"
SRCREV_machine:kb-v6.18-standard-mchp-sdk-6.18-microchip-riscv ?= "97a00cf4cd1d962b58f01e628028a179628f7763"
LINUX_VERSION:kb-v6.18-standard-mchp-sdk-6.18-microchip-riscv = "6.18.32"
SRCREV_machine:kb-v6.18-standard-mti-malta ?= "cc43388d297e445741f323f24cecbd704f2ce278"
LINUX_VERSION:kb-v6.18-standard-mti-malta = "6.18.32"
SRCREV_machine:kb-v6.18-standard-nvidia-soc ?= "12390d3cb38ab56c560371ee810f97040af97c87"
LINUX_VERSION:kb-v6.18-standard-nvidia-soc = "6.18.32"
SRCREV_machine:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc ?= "4d4a395169509fb3b1bbec6de462e954cd43aa85"
LINUX_VERSION:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc = "6.18.32"
SRCREV_machine:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs ?= "f65013ddf83a74e1a236c95ba03ecbb10b5a3dbf"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs = "6.18.32"
SRCREV_machine:kb-v6.18-standard-preempt-rt-base ?= "dda294005f893c24b6322a7bdf58d7575f4ad21f"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-base = "6.18.32"
SRCREV_machine:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi ?= "a24ae23406b57503b6c6c642f365e16591e7a55e"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi = "6.18.32"
SRCREV_machine:kb-v6.18-standard-preempt-rt-genericarm64 ?= "2367d71217f81330a330cb6de70111e0c7570d34"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-genericarm64 = "6.18.32"
SRCREV_machine:kb-v6.18-standard-preempt-rt-mchp-sdk-6.18-microchip-riscv ?= "21769e3b645aa145c378c2e8dc26353740b9905a"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-mchp-sdk-6.18-microchip-riscv = "6.18.32"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nvidia-soc ?= "51a05e9184cfcbd05ffe539b512d9da34fe0b46b"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nvidia-soc = "6.18.32"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc ?= "a279b31769e5a6bc4d025c4c4a477bb25c372b5e"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc = "6.18.32"
SRCREV_machine:kb-v6.18-standard-preempt-rt-x86 ?= "85a6c981a5b816880f328896bf8445b2452b5dcc"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-x86 = "6.18.32"
SRCREV_machine:kb-v6.18-standard-qemuppc ?= "8b43828d68f73df49a408e5bba88eade55b0ca09"
LINUX_VERSION:kb-v6.18-standard-qemuppc = "6.18.32"
SRCREV_machine:kb-v6.18-standard-tiny-arm-versatile-926ejs ?= "2c192cf05f25e0162ee481647ec5c0347e95e3fd"
LINUX_VERSION:kb-v6.18-standard-tiny-arm-versatile-926ejs = "6.18.32"
SRCREV_machine:kb-v6.18-standard-tiny-base ?= "8b43828d68f73df49a408e5bba88eade55b0ca09"
LINUX_VERSION:kb-v6.18-standard-tiny-base = "6.18.32"
SRCREV_machine:kb-v6.18-standard-tiny-x86 ?= "8b43828d68f73df49a408e5bba88eade55b0ca09"
LINUX_VERSION:kb-v6.18-standard-tiny-x86 = "6.18.32"
SRCREV_machine:kb-v6.18-standard-x86 ?= "8b43828d68f73df49a408e5bba88eade55b0ca09"
LINUX_VERSION:kb-v6.18-standard-x86 = "6.18.32"
SRCREV_machine:kb-v6.18-standard-xilinx-zynqmp ?= "8b43828d68f73df49a408e5bba88eade55b0ca09"
LINUX_VERSION:kb-v6.18-standard-xilinx-zynqmp = "6.18.32"

# yocto-kernel-cache entries
KERNEL_CACHE_BRANCH_6.18 = "yocto-6.18"
SRCREV_meta_6.18 = "fbc4b73674ba3b8493fe22c12e08fccb4a4b2378"
