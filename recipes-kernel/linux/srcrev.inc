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
SRCREV_machine:kb-v6.18-standard-arm-versatile-926ejs ?= "3b286445808e87e84e17aee7edffdd5a9d40bd7d"
LINUX_VERSION:kb-v6.18-standard-arm-versatile-926ejs = "6.18.28"
SRCREV_machine:kb-v6.18-standard-base ?= "25417db3cdca6f122a83d9698b57781b27911832"
LINUX_VERSION:kb-v6.18-standard-base = "6.18.28"
SRCREV_machine:kb-v6.18-standard-bcm-2xxx-rpi ?= "a7386a508c0e8b128aebaa307390ba031b501866"
LINUX_VERSION:kb-v6.18-standard-bcm-2xxx-rpi = "6.18.28"
SRCREV_machine:kb-v6.18-standard-beaglebone ?= "25417db3cdca6f122a83d9698b57781b27911832"
LINUX_VERSION:kb-v6.18-standard-beaglebone = "6.18.28"
SRCREV_machine:kb-v6.18-standard-genericarm64 ?= "ba7cf46e879c4d6bf5ba93605786963df8d8a6d6"
LINUX_VERSION:kb-v6.18-standard-genericarm64 = "6.18.28"
SRCREV_machine:kb-v6.18-standard-mchp-sdk-6.18-microchip-riscv ?= "ea521b44f4709b8df32740d28c7639e8f343c75d"
LINUX_VERSION:kb-v6.18-standard-mchp-sdk-6.18-microchip-riscv = "6.18.28"
SRCREV_machine:kb-v6.18-standard-mti-malta ?= "36e88a515ec33f58dbaa43b4ad0566581b46ef83"
LINUX_VERSION:kb-v6.18-standard-mti-malta = "6.18.28"
SRCREV_machine:kb-v6.18-standard-nvidia-soc ?= "24c6e3b4fe527bc745f8ad4189e163cfbe768210"
LINUX_VERSION:kb-v6.18-standard-nvidia-soc = "6.18.28"
SRCREV_machine:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc ?= "de431826d45c63905a092b698685254a1b04646e"
LINUX_VERSION:kb-v6.18-standard-nxp-sdk-6.18-nxp-soc = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs ?= "36a30ce73ed0c182ed6fcd8fe3c685f452ee7683"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-arm-versatile-926ejs = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-base ?= "74ad9812723172dfd8bf41ec7efb609372ba7182"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-base = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi ?= "3deaec82606db67f0958a525451dea118fe0e7b8"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-bcm-2xxx-rpi = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-genericarm64 ?= "ae2a65cff4fb7286d229ddd2967a22727ad28db2"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-genericarm64 = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-mchp-sdk-6.18-microchip-riscv ?= "2e51bd45ee5642b381b3500131023405425e5b95"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-mchp-sdk-6.18-microchip-riscv = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nvidia-soc ?= "6188ced525f6aa42ef9343fc0b44efb8fe2e4cb8"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nvidia-soc = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc ?= "fec74ed1c304288607487a5b9ba742c4c2ad1ee4"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-nxp-sdk-6.18-nxp-soc = "6.18.28"
SRCREV_machine:kb-v6.18-standard-preempt-rt-x86 ?= "298f135ed2929797b57bdfed0db6c0d83c426205"
LINUX_VERSION:kb-v6.18-standard-preempt-rt-x86 = "6.18.28"
SRCREV_machine:kb-v6.18-standard-qemuppc ?= "25417db3cdca6f122a83d9698b57781b27911832"
LINUX_VERSION:kb-v6.18-standard-qemuppc = "6.18.28"
SRCREV_machine:kb-v6.18-standard-tiny-arm-versatile-926ejs ?= "787440aaf47ecc8adca069a8284c16d0fdee8521"
LINUX_VERSION:kb-v6.18-standard-tiny-arm-versatile-926ejs = "6.18.28"
SRCREV_machine:kb-v6.18-standard-tiny-base ?= "25417db3cdca6f122a83d9698b57781b27911832"
LINUX_VERSION:kb-v6.18-standard-tiny-base = "6.18.28"
SRCREV_machine:kb-v6.18-standard-tiny-x86 ?= "25417db3cdca6f122a83d9698b57781b27911832"
LINUX_VERSION:kb-v6.18-standard-tiny-x86 = "6.18.28"
SRCREV_machine:kb-v6.18-standard-x86 ?= "25417db3cdca6f122a83d9698b57781b27911832"
LINUX_VERSION:kb-v6.18-standard-x86 = "6.18.28"
SRCREV_machine:kb-v6.18-standard-xilinx-zynqmp ?= "25417db3cdca6f122a83d9698b57781b27911832"
LINUX_VERSION:kb-v6.18-standard-xilinx-zynqmp = "6.18.28"

# yocto-kernel-cache entries
KERNEL_CACHE_BRANCH_6.18 = "yocto-6.18"
SRCREV_meta_6.18 = "9c909f87b520e6e362734c84dba8a642fae31179"
