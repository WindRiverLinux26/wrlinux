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
SRCREV_machine:kb-v6.18-base ?= "1fe06068166d4fc16722201f267b1fe19efad639"
LINUX_VERSION:kb-v6.18-base = "6.18.26"
SRCREV_machine:kb-v6.18-standard-arm-versatile-926ejs ?= "11ba8770344f8b1cf3d6960b2d04ca19ed6d1f81"
LINUX_VERSION:kb-v6.18-standard-arm-versatile-926ejs = "6.18.26"
SRCREV_machine:kb-v6.18-standard-base ?= "4267d0126960b8bc599060c71014e8d8a4b8becf"
LINUX_VERSION:kb-v6.18-standard-base = "6.18.26"
SRCREV_machine:kb-v6.18-standard-bcm-2xxx-rpi ?= "ea5449cde0585d3ef381df1d57ea736510a0305a"
LINUX_VERSION:kb-v6.18-standard-bcm-2xxx-rpi = "6.18.26"
SRCREV_machine:kb-v6.18-standard-beaglebone ?= "4267d0126960b8bc599060c71014e8d8a4b8becf"
LINUX_VERSION:kb-v6.18-standard-beaglebone = "6.18.26"
SRCREV_machine:kb-v6.18-standard-genericarm64 ?= "a75037479dab2b35403aeda227894ee36cd39941"
LINUX_VERSION:kb-v6.18-standard-genericarm64 = "6.18.26"
SRCREV_machine:kb-v6.18-standard-mti-malta ?= "d9ada9f93f3c9daf75be7ab2739a2e4fa69889a4"
LINUX_VERSION:kb-v6.18-standard-mti-malta = "6.18.26"
SRCREV_machine:kb-v6.18-standard-nvidia-soc ?= "5ceb8344585e75c8864a59b0301c4db477c59f43"
LINUX_VERSION:kb-v6.18-standard-nvidia-soc = "6.18.26"
SRCREV_machine:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc ?= "7f19bb62637f0c440b62a651a76ae6573afdf76a"
LINUX_VERSION:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc = "6.18.26"
SRCREV_machine:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs ?= "5e5c682101629874bf4e956cb70c8eaca5890acc"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs = "6.18.26"
SRCREV_machine:kb-v6.18-standard-preempt-rt-base ?= "e1a1c058b8b1fd85e631c877cacb0e5c38da1c57"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-base = "6.18.26"
SRCREV_machine:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi ?= "1127de0ceda6cc5918779c2e9c55345dd27264b0"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi = "6.18.26"
SRCREV_machine:kb-v6.18-standard-preempt-rt-genericarm64 ?= "67be18a7a6b529aacdae063de37a788e498d7378"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-genericarm64 = "6.18.26"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nvidia-soc ?= "607d94cfa3abef86072cb15ff9ab0d9b4b3037de"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nvidia-soc = "6.18.26"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc ?= "01647d2ffa711304e5090539a236750ce26d0aab"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc = "6.18.26"
SRCREV_machine:kb-v6.18-standard-preempt-rt-x86 ?= "5a22348e2f48abb5778f99812dd3c440b4c92b6f"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-x86 = "6.18.26"
SRCREV_machine:kb-v6.18-standard-qemuppc ?= "4267d0126960b8bc599060c71014e8d8a4b8becf"
LINUX_VERSION:kb-v6.18-standard-qemuppc = "6.18.26"
SRCREV_machine:kb-v6.18-standard-tiny-arm-versatile-926ejs ?= "58a4e4a4aa95fbb3d2da37e191aeaf3562fdc2f7"
LINUX_VERSION:kb-v6.18-standard-tiny-arm-versatile-926ejs = "6.18.26"
SRCREV_machine:kb-v6.18-standard-tiny-base ?= "4267d0126960b8bc599060c71014e8d8a4b8becf"
LINUX_VERSION:kb-v6.18-standard-tiny-base = "6.18.26"
SRCREV_machine:kb-v6.18-standard-tiny-x86 ?= "4267d0126960b8bc599060c71014e8d8a4b8becf"
LINUX_VERSION:kb-v6.18-standard-tiny-x86 = "6.18.26"
SRCREV_machine:kb-v6.18-standard-x86 ?= "4267d0126960b8bc599060c71014e8d8a4b8becf"
LINUX_VERSION:kb-v6.18-standard-x86 = "6.18.26"
SRCREV_machine:kb-v6.18-standard-xilinx-zynqmp ?= "4267d0126960b8bc599060c71014e8d8a4b8becf"
LINUX_VERSION:kb-v6.18-standard-xilinx-zynqmp = "6.18.26"

# yocto-kernel-cache entries
KERNEL_CACHE_BRANCH_6.18 = "yocto-6.18"
SRCREV_meta_6.18 = "127f83ad4e21b6663d72fceba80bfb945c21e4f0"
