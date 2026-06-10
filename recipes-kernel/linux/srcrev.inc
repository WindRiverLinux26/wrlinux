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
SRCREV_machine:kb-v6.18-base ?= "acb7cf4c1184e27622be0faf89244d5001ed1e87"
LINUX_VERSION:kb-v6.18-base = "6.18.35"
SRCREV_machine:kb-v6.18-standard-arm-versatile-926ejs ?= "84b49a9fef57bf4ff3a2919591fde336fe7944bf"
LINUX_VERSION:kb-v6.18-standard-arm-versatile-926ejs = "6.18.35"
SRCREV_machine:kb-v6.18-standard-base ?= "efc05d9af9f5b5a647e229c92542e413c3a9915d"
LINUX_VERSION:kb-v6.18-standard-base = "6.18.35"
SRCREV_machine:kb-v6.18-standard-bcm-2xxx-rpi ?= "0627e821048c7a357891b9e6e82049f6f86639d9"
LINUX_VERSION:kb-v6.18-standard-bcm-2xxx-rpi = "6.18.35"
SRCREV_machine:kb-v6.18-standard-beaglebone ?= "efc05d9af9f5b5a647e229c92542e413c3a9915d"
LINUX_VERSION:kb-v6.18-standard-beaglebone = "6.18.35"
SRCREV_machine:kb-v6.18-standard-genericarm64 ?= "d6f3a955dcf77a71454a2d70f291bd39d06422ff"
LINUX_VERSION:kb-v6.18-standard-genericarm64 = "6.18.35"
SRCREV_machine:kb-v6.18-standard-mchp-sdk-6.18-microchip-riscv ?= "4c6d69049fe1cd3e1d619c80324e0cfcdd641b87"
LINUX_VERSION:kb-v6.18-standard-mchp-sdk-6.18-microchip-riscv = "6.18.35"
SRCREV_machine:kb-v6.18-standard-mti-malta ?= "25a1ba45abc79ed1e1602974947538af6fad11a8"
LINUX_VERSION:kb-v6.18-standard-mti-malta = "6.18.35"
SRCREV_machine:kb-v6.18-standard-nvidia-soc ?= "758c6fa9e2188f46e549c60be809c5f98696686e"
LINUX_VERSION:kb-v6.18-standard-nvidia-soc = "6.18.35"
SRCREV_machine:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc ?= "f2304e37db9f84e89adaf4941d822926b72368a2"
LINUX_VERSION:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc = "6.18.35"
SRCREV_machine:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs ?= "9c81ac644e6c9a666b01b9ba2459cbbbf444efa2"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs = "6.18.35"
SRCREV_machine:kb-v6.18-standard-preempt-rt-base ?= "35a623d1a755631bbc73e11fa02eee0e1092188b"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-base = "6.18.35"
SRCREV_machine:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi ?= "9ec4a6bea147297f1508284b13ef83a95936b512"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi = "6.18.35"
SRCREV_machine:kb-v6.18-standard-preempt-rt-genericarm64 ?= "deeed11e35e1fd8f80c47676e23a6eb2e92ec6cd"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-genericarm64 = "6.18.35"
SRCREV_machine:kb-v6.18-standard-preempt-rt-mchp-sdk-6.18-microchip-riscv ?= "45e73ca89eaf31a5830dc2d2157a25540508f26a"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-mchp-sdk-6.18-microchip-riscv = "6.18.35"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nvidia-soc ?= "3abcd9f336e6dfc9bef4745c42c3279c1a2b26b0"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nvidia-soc = "6.18.35"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc ?= "34a1bcc244ab62a86de5abee0d59cba6f823f570"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc = "6.18.35"
SRCREV_machine:kb-v6.18-standard-preempt-rt-x86 ?= "f987b10687e3e2772ca25b1e78b831e50651acbc"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-x86 = "6.18.35"
SRCREV_machine:kb-v6.18-standard-preempt-rt-xlnx-soc ?= "eb720e260be7bdcb3b3365a99b5b8e7365f1ad46"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-xlnx-soc = "6.18.35"
SRCREV_machine:kb-v6.18-standard-qemuppc ?= "efc05d9af9f5b5a647e229c92542e413c3a9915d"
LINUX_VERSION:kb-v6.18-standard-qemuppc = "6.18.35"
SRCREV_machine:kb-v6.18-standard-tiny-arm-versatile-926ejs ?= "34d0f5bc797a308daa2fc9955a8bd745b5b623ca"
LINUX_VERSION:kb-v6.18-standard-tiny-arm-versatile-926ejs = "6.18.35"
SRCREV_machine:kb-v6.18-standard-tiny-base ?= "efc05d9af9f5b5a647e229c92542e413c3a9915d"
LINUX_VERSION:kb-v6.18-standard-tiny-base = "6.18.35"
SRCREV_machine:kb-v6.18-standard-tiny-x86 ?= "efc05d9af9f5b5a647e229c92542e413c3a9915d"
LINUX_VERSION:kb-v6.18-standard-tiny-x86 = "6.18.35"
SRCREV_machine:kb-v6.18-standard-x86 ?= "efc05d9af9f5b5a647e229c92542e413c3a9915d"
LINUX_VERSION:kb-v6.18-standard-x86 = "6.18.35"
SRCREV_machine:kb-v6.18-standard-xilinx-zynqmp ?= "efc05d9af9f5b5a647e229c92542e413c3a9915d"
LINUX_VERSION:kb-v6.18-standard-xilinx-zynqmp = "6.18.35"
SRCREV_machine:kb-v6.18-standard-xlnx-soc ?= "dd5c01ef498a351851f57df4753d70a5d60b67d1"
LINUX_VERSION:kb-v6.18-standard-xlnx-soc = "6.18.35"

# yocto-kernel-cache entries
KERNEL_CACHE_BRANCH_6.18 = "yocto-6.18"
SRCREV_meta_6.18 = "4dafe0e420087b6381728e68eeeff6d9af0a32e7"
