SUMMARY = "Wind River Linux Kiosk"
DESCRIPTION = "Enable kiosk mode for Epiphany"
HOMEPAGE = "https://www.windriver.com"
SECTION = "x11"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://web-kiosk.service \
           file://web-kiosk.sh \
          "

S = "${UNPACKDIR}"

inherit useradd features_check systemd

USERADD_PACKAGES = "${PN}"
USERADD_PARAM:${PN} = "-m -d /home/kiosk -U -r -s /bin/sh kiosk"

REQUIRED_DISTRO_FEATURES = "x11 systemd"

SYSTEMD_AUTO_ENABLE:${PN} = "enable"
SYSTEMD_SERVICE:${PN} = "web-kiosk.service"

STARTING_URL ?= ""

do_install() {
    install -d ${D}${systemd_system_unitdir}
    install -m 644 ${UNPACKDIR}/web-kiosk.service \
        ${D}${systemd_system_unitdir}/web-kiosk.service

    sed -i -e 's#@BINDIR@#${bindir}#g' \
        ${D}${systemd_system_unitdir}/web-kiosk.service

    install -d ${D}${bindir}
    install -m 755 ${UNPACKDIR}/web-kiosk.sh ${D}${bindir}/web-kiosk.sh

    sed -i -e 's#@STARTING_URL@#${STARTING_URL}#g' \
        ${D}${bindir}/web-kiosk.sh
}

RDEPENDS:${PN} = "mini-x-session onboard"
