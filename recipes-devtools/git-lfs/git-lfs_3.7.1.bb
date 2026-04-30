HOMEPAGE = "https://github.com/git-lfs/git-lfs"
SUMMARY = "Git LFS is a command line extension and specification for managing large files with Git."
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://src/import/LICENSE.md;md5=58e90ef3218ad8dd56d2b5790d035be1"

# Specify the first two important SRCREVs as the format
SRCREV_FORMAT = "git-lfs_cgroups"
SRCREV_git-lfs = "b84b33847fe6458f36ef521534dc0eac953cb379"

SRC_URI = " \
    git://github.com/git-lfs/git-lfs.git;name=git-lfs;branch=main;protocol=https;destsuffix=${GO_SRCURI_DESTSUFFIX} \
    file://modules.txt \
"

include src_uri.inc
inherit go goarch

GO_IMPORT = "import"

DEPENDS += " \
    rsync-native \
"

RDEPENDS:${PN}-dev = " \
    make \
"

PIEFLAG = "${@bb.utils.contains('GOBUILDFLAGS', '-buildmode=pie', '-buildmode=pie', '', d)}"
do_compile() {
    cd ${S}/src/import

    # Pass the needed cflags/ldflags so that cgo
    # can find the needed headers files and libraries
    export GOARCH=${TARGET_GOARCH}
    export CGO_ENABLED="1"
    export CGO_CFLAGS="${CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
    export CGO_LDFLAGS="${LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"

    export GOFLAGS="-mod=vendor -trimpath ${PIEFLAG}"

    # our copied .go files are to be used for the build
    ln -sf vendor.copy vendor
    # inform go that we know what we are doing
    cp ${UNPACKDIR}/modules.txt vendor/

    ${GO} build -x -v ${GOBUILDFLAGS} -o ${B}/bin/git-lfs -ldflags="-X github.com/git-lfs/git-lfs/v3/config.GitCommit=${SRCREV_git-lfs}"
}

do_install() {
    install -d ${D}${bindir}
    install -m 755 ${B}/bin/git-lfs ${D}${bindir}
}


include relocation.inc

BBCLASSEXTEND = "native nativesdk"
