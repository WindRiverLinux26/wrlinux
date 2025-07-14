DESCRIPTION = "Basic rc.local facility for wrlinux"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://rc.local.example \
           file://rcinit" 

S = "${UNPACKDIR}"

inherit update-rc.d

INITSCRIPT_NAME = "rcinit"
INITSCRIPT_PARAMS = "start 999 2 3 4 5 ."

inherit features_check

REQUIRED_DISTRO_FEATURES = "sysvinit"

do_install () {
    install -d ${D}/${sysconfdir}/
    install -m 755 ${S}/rc.local.example ${D}/${sysconfdir}/rc.local

    install -d ${D}/${sysconfdir}/init.d
    install -m 755 ${S}/rcinit ${D}/${sysconfdir}/init.d/rcinit
} 

# As the recipe doesn't inherit systemd.bbclass, we need to set this variable
# manually to avoid unnecessary postinst/preinst generated.
python __anonymous() {
    if not bb.utils.contains('DISTRO_FEATURES', 'sysvinit', True, False, d):
        d.setVar("INHIBIT_UPDATERCD_BBCLASS", "1")
}
