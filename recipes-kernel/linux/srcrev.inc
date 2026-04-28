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
SRCREV_machine:kb-v6.18-base ?= "a256b1e6892e7fe840f0f9746316fa938e9a421f"
LINUX_VERSION:kb-v6.18-base = "6.18.25"
SRCREV_machine:kb-v6.18-standard-arm-versatile-926ejs ?= "6788c0f14b51b8c84f0153d58b00d5115f2ee8e5"
LINUX_VERSION:kb-v6.18-standard-arm-versatile-926ejs = "6.18.25"
SRCREV_machine:kb-v6.18-standard-base ?= "61a746df3dd151cccb3078ee6e1092d227b2514a"
LINUX_VERSION:kb-v6.18-standard-base = "6.18.25"
SRCREV_machine:kb-v6.18-standard-bcm-2xxx-rpi ?= "56e47aff0bfb821d00562b7c9525b845388fc6a1"
LINUX_VERSION:kb-v6.18-standard-bcm-2xxx-rpi = "6.18.25"
SRCREV_machine:kb-v6.18-standard-beaglebone ?= "61a746df3dd151cccb3078ee6e1092d227b2514a"
LINUX_VERSION:kb-v6.18-standard-beaglebone = "6.18.25"
SRCREV_machine:kb-v6.18-standard-genericarm64 ?= "6ad892116f3c1cc17c0b9df907607b1b5fe02bb8"
LINUX_VERSION:kb-v6.18-standard-genericarm64 = "6.18.25"
SRCREV_machine:kb-v6.18-standard-mti-malta ?= "e7e7f5d38b351658934fb9423a7609eff395af0b"
LINUX_VERSION:kb-v6.18-standard-mti-malta = "6.18.25"
SRCREV_machine:kb-v6.18-standard-nvidia-soc ?= "ca7990522caf5ce9ecaaf43c896fdeec056d5953"
LINUX_VERSION:kb-v6.18-standard-nvidia-soc = "6.18.25"
SRCREV_machine:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc ?= "3407b4e73486b944d1255c44515ec896fb4cdfd0"
LINUX_VERSION:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc = "6.18.24"
SRCREV_machine:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs ?= "606ccf9fc72856ebc4c3dc261be38db0fc9f0ee7"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs = "6.18.25"
SRCREV_machine:kb-v6.18-standard-preempt-rt-base ?= "b47fc8aaa6f14b240bd96eb35e73d3d8ba638d21"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-base = "6.18.25"
SRCREV_machine:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi ?= "01bf92ddfef5eb2828f3211e62a3fa97f859a685"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi = "6.18.25"
SRCREV_machine:kb-v6.18-standard-preempt-rt-genericarm64 ?= "35f3c02fe48abe7fdc506125545db13a427da3de"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-genericarm64 = "6.18.25"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nvidia-soc ?= "e85e641ab66e832b690cb17c954f008c887c9d05"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nvidia-soc = "6.18.25"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc ?= "58c81333ad4f33e776fe0cf34e53a8bcc28f3769"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc = "6.18.24"
SRCREV_machine:kb-v6.18-standard-preempt-rt-x86 ?= "5b7fb807c9fc822817175486eb8867a71884d845"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-x86 = "6.18.25"
SRCREV_machine:kb-v6.18-standard-qemuppc ?= "61a746df3dd151cccb3078ee6e1092d227b2514a"
LINUX_VERSION:kb-v6.18-standard-qemuppc = "6.18.25"
SRCREV_machine:kb-v6.18-standard-tiny-arm-versatile-926ejs ?= "7df74f9be618a8ea000553aae30b38641f1a02fd"
LINUX_VERSION:kb-v6.18-standard-tiny-arm-versatile-926ejs = "6.18.25"
SRCREV_machine:kb-v6.18-standard-tiny-base ?= "61a746df3dd151cccb3078ee6e1092d227b2514a"
LINUX_VERSION:kb-v6.18-standard-tiny-base = "6.18.25"
SRCREV_machine:kb-v6.18-standard-tiny-x86 ?= "61a746df3dd151cccb3078ee6e1092d227b2514a"
LINUX_VERSION:kb-v6.18-standard-tiny-x86 = "6.18.25"
SRCREV_machine:kb-v6.18-standard-x86 ?= "61a746df3dd151cccb3078ee6e1092d227b2514a"
LINUX_VERSION:kb-v6.18-standard-x86 = "6.18.25"
SRCREV_machine:kb-v6.18-standard-xilinx-zynqmp ?= "61a746df3dd151cccb3078ee6e1092d227b2514a"
LINUX_VERSION:kb-v6.18-standard-xilinx-zynqmp = "6.18.25"

# yocto-kernel-cache entries
KERNEL_CACHE_BRANCH_6.18 = "yocto-6.18"
SRCREV_meta_6.18 = "177495c151446a679945c20611499537d72ebcd9"
