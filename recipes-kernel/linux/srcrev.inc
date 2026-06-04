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
SRCREV_machine:kb-v6.18-base ?= "83657f4189612e5cbcabc3058acd36c0bd120729"
LINUX_VERSION:kb-v6.18-base = "6.18.33"
SRCREV_machine:kb-v6.18-standard-arm-versatile-926ejs ?= "9b84e2ac85be6a214946c65debaab56e3bebd546"
LINUX_VERSION:kb-v6.18-standard-arm-versatile-926ejs = "6.18.33"
SRCREV_machine:kb-v6.18-standard-base ?= "32bc3dcadb49e9a4f4474ec743e2c5ddd7f44a27"
LINUX_VERSION:kb-v6.18-standard-base = "6.18.33"
SRCREV_machine:kb-v6.18-standard-bcm-2xxx-rpi ?= "bbe4954cd1005e2dbb170b9cbdbf334311b80f9a"
LINUX_VERSION:kb-v6.18-standard-bcm-2xxx-rpi = "6.18.33"
SRCREV_machine:kb-v6.18-standard-beaglebone ?= "32bc3dcadb49e9a4f4474ec743e2c5ddd7f44a27"
LINUX_VERSION:kb-v6.18-standard-beaglebone = "6.18.33"
SRCREV_machine:kb-v6.18-standard-genericarm64 ?= "6bf211598fd7bc81856d3d84b0cc610e2bbe81db"
LINUX_VERSION:kb-v6.18-standard-genericarm64 = "6.18.33"
SRCREV_machine:kb-v6.18-standard-mchp-sdk-6.18-microchip-riscv ?= "9a08ef3c7093fa28be614afa60fa261daea3327b"
LINUX_VERSION:kb-v6.18-standard-mchp-sdk-6.18-microchip-riscv = "6.18.33"
SRCREV_machine:kb-v6.18-standard-mti-malta ?= "7f2d9b149793b9e162c0bcc1cfcf4a261dfd53c0"
LINUX_VERSION:kb-v6.18-standard-mti-malta = "6.18.33"
SRCREV_machine:kb-v6.18-standard-nvidia-soc ?= "1461e4a06305349ae5e31a6b27c0ffe0d442d846"
LINUX_VERSION:kb-v6.18-standard-nvidia-soc = "6.18.33"
SRCREV_machine:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc ?= "5a44ff2cce138bb9f46c38b2836b76e4616ffe9a"
LINUX_VERSION:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc = "6.18.33"
SRCREV_machine:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs ?= "86b54316de217b0d9d4610800d651c8f5ed873ee"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs = "6.18.33"
SRCREV_machine:kb-v6.18-standard-preempt-rt-base ?= "058dc6c42aff140a8fa55c732809d896223fd6fc"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-base = "6.18.33"
SRCREV_machine:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi ?= "a5b09ba8f61ff828b12d3cbc549d3dd34203d59c"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi = "6.18.33"
SRCREV_machine:kb-v6.18-standard-preempt-rt-genericarm64 ?= "0d3a6a6c069ed7c98584471d2e605f6211c8e216"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-genericarm64 = "6.18.33"
SRCREV_machine:kb-v6.18-standard-preempt-rt-mchp-sdk-6.18-microchip-riscv ?= "1fd24ca07fa77ceee10cd4cddebbddffa2bee912"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-mchp-sdk-6.18-microchip-riscv = "6.18.33"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nvidia-soc ?= "b1ac78529bed2ea882917b076e3675840751ffeb"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nvidia-soc = "6.18.33"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc ?= "4e07ad4ab2407ad3bcc0259bafd12ebd2cdd6ba0"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc = "6.18.33"
SRCREV_machine:kb-v6.18-standard-preempt-rt-x86 ?= "397b7f1cff48920315a6b9ebcaa2abc26fd18a56"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-x86 = "6.18.33"
SRCREV_machine:kb-v6.18-standard-preempt-rt-xlnx-soc ?= "3ee7ff783ab41e31150f3d9d58887a4afa2ad300"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-xlnx-soc = "6.18.33"
SRCREV_machine:kb-v6.18-standard-qemuppc ?= "32bc3dcadb49e9a4f4474ec743e2c5ddd7f44a27"
LINUX_VERSION:kb-v6.18-standard-qemuppc = "6.18.33"
SRCREV_machine:kb-v6.18-standard-tiny-arm-versatile-926ejs ?= "719cb1625541e311c9fbc1683e70b03b06476efd"
LINUX_VERSION:kb-v6.18-standard-tiny-arm-versatile-926ejs = "6.18.33"
SRCREV_machine:kb-v6.18-standard-tiny-base ?= "32bc3dcadb49e9a4f4474ec743e2c5ddd7f44a27"
LINUX_VERSION:kb-v6.18-standard-tiny-base = "6.18.33"
SRCREV_machine:kb-v6.18-standard-tiny-x86 ?= "32bc3dcadb49e9a4f4474ec743e2c5ddd7f44a27"
LINUX_VERSION:kb-v6.18-standard-tiny-x86 = "6.18.33"
SRCREV_machine:kb-v6.18-standard-x86 ?= "32bc3dcadb49e9a4f4474ec743e2c5ddd7f44a27"
LINUX_VERSION:kb-v6.18-standard-x86 = "6.18.33"
SRCREV_machine:kb-v6.18-standard-xilinx-zynqmp ?= "32bc3dcadb49e9a4f4474ec743e2c5ddd7f44a27"
LINUX_VERSION:kb-v6.18-standard-xilinx-zynqmp = "6.18.33"
SRCREV_machine:kb-v6.18-standard-xlnx-soc ?= "3c91de62c182a6f557d91caa2fe6039c8309cb2f"
LINUX_VERSION:kb-v6.18-standard-xlnx-soc = "6.18.33"

# yocto-kernel-cache entries
KERNEL_CACHE_BRANCH_6.18 = "yocto-6.18"
SRCREV_meta_6.18 = "6d012fbc35201ba081efcc19c9519c1dc7b64c43"
