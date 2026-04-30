# [golang.org/x/net v0.38.0] git ls-remote https://go.googlesource.com/net e1fcd82abba34df74614020343be8eb1fe85f0d9
SRCREV_net = "e1fcd82abba34df74614020343be8eb1fe85f0d9"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/net"

# [golang.org/x/sys v0.31.0] git ls-remote https://go.googlesource.com/sys 74cfc93a99be6ca6f193856132e6799065b071af
SRCREV_sys = "74cfc93a99be6ca6f193856132e6799065b071af"
SRC_URI += "git://go.googlesource.com/sys;name=sys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sys"

# [gopkg.in/yaml.v3 v3.0.1] git ls-remote https://github.com/go-yaml/yaml f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_yaml.v3 = "f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/yaml.v3"

# [golang.org/x/sync v0.12.0] git ls-remote https://go.googlesource.com/sync b637f27e40ad6e222f3d301cc113e635f0fa08be
SRCREV_sync = "b637f27e40ad6e222f3d301cc113e635f0fa08be"
SRC_URI += "git://go.googlesource.com/sync;name=sync;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sync"

# [golang.org/x/text v0.23.0] git ls-remote https://go.googlesource.com/text 566b44fc931e2542778a18423c655ce99b4f1402
SRCREV_text = "566b44fc931e2542778a18423c655ce99b4f1402"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/text"

# [golang.org/x/crypto v0.36.0] git ls-remote https://go.googlesource.com/crypto 49bf5b80c8108983f588ecabd7bf996e6e63a515
SRCREV_crypto = "49bf5b80c8108983f588ecabd7bf996e6e63a515"
SRC_URI += "git://go.googlesource.com/crypto;name=crypto;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/crypto"

# [github.com/pkg/errors v0.0.0-20170505043639-c605e284fe17] git ls-remote https://github.com/pkg/errors c605e284fe17294bda444b34710735b29d1a9d90
SRCREV_errors = "c605e284fe17294bda444b34710735b29d1a9d90"
SRC_URI += "git://github.com/pkg/errors;name=errors;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pkg/errors"

# [github.com/spf13/cobra v1.7.0] git ls-remote https://github.com/spf13/cobra 4dd4b25de38418174a6e859e8a32eaccca32dccc
SRCREV_cobra = "4dd4b25de38418174a6e859e8a32eaccca32dccc"
SRC_URI += "git://github.com/spf13/cobra;name=cobra;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/cobra"

# [github.com/spf13/pflag v1.0.5] git ls-remote https://github.com/spf13/pflag 2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab
SRCREV_pflag = "2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab"
SRC_URI += "git://github.com/spf13/pflag;name=pflag;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/pflag"

# [github.com/olekukonko/ts v0.0.0-20171002115256-78ecb04241c0] git ls-remote https://github.com/olekukonko/ts 78ecb04241c0121483589a30b0814836a746187d
SRCREV_ts = "78ecb04241c0121483589a30b0814836a746187d"
SRC_URI += "git://github.com/olekukonko/ts;name=ts;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/olekukonko/ts"

# [github.com/avast/retry-go v2.4.2+incompatible] git ls-remote https://github.com/avast/retry-go a322e24d96313ab405dec28ad5711f036c6d25a3
SRCREV_retry-go = "a322e24d96313ab405dec28ad5711f036c6d25a3"
SRC_URI += "git://github.com/avast/retry-go;name=retry-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/avast/retry-go"

# [github.com/jmhodges/clock v1.2.0] git ls-remote https://github.com/jmhodges/clock 21de17d65b1b5cd83bb8fdbef90cb2ac369ce2dd
SRCREV_clock = "21de17d65b1b5cd83bb8fdbef90cb2ac369ce2dd"
SRC_URI += "git://github.com/jmhodges/clock;name=clock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jmhodges/clock"

# [github.com/git-lfs/pktline v0.0.0-20210330133718-06e9096e2825] git ls-remote https://github.com/git-lfs/pktline 06e9096e28253ba5c7825cbba43f469e4efd10f0
SRCREV_pktline = "06e9096e28253ba5c7825cbba43f469e4efd10f0"
SRC_URI += "git://github.com/git-lfs/pktline;name=pktline;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/git-lfs/pktline"

# [github.com/mattn/go-isatty v0.0.4] git ls-remote https://github.com/mattn/go-isatty 6ca4dbf54d38eea1a992b3c722a76a5d1c4cb25c
SRCREV_go-isatty = "6ca4dbf54d38eea1a992b3c722a76a5d1c4cb25c"
SRC_URI += "git://github.com/mattn/go-isatty;name=go-isatty;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-isatty"

# [github.com/rubyist/tracerx v0.0.0-20170927163412-787959303086] git ls-remote https://github.com/rubyist/tracerx 787959303086f44a8c361240dfac53d3e9d53ed2
SRCREV_tracerx = "787959303086f44a8c361240dfac53d3e9d53ed2"
SRC_URI += "git://github.com/rubyist/tracerx;name=tracerx;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rubyist/tracerx"

# [github.com/davecgh/go-spew v1.1.1] git ls-remote https://github.com/davecgh/go-spew 8991bc29aa16c548c550c7ff78260e27b9ab7c73
SRCREV_go-spew = "8991bc29aa16c548c550c7ff78260e27b9ab7c73"
SRC_URI += "git://github.com/davecgh/go-spew;name=go-spew;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/davecgh/go-spew"

# [github.com/git-lfs/go-netrc v0.0.0-20250218165306-ba0029b43d11] git ls-remote https://github.com/git-lfs/go-netrc ba0029b43d1190baf66986a87418593ed1a07f42
SRCREV_go-netrc = "ba0029b43d1190baf66986a87418593ed1a07f42"
SRC_URI += "git://github.com/git-lfs/go-netrc;name=go-netrc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/git-lfs/go-netrc"

# [github.com/stretchr/testify v1.6.1] git ls-remote https://github.com/stretchr/testify f654a9112bbeac49ca2cd45bfbe11533c4666cf8
SRCREV_testify = "f654a9112bbeac49ca2cd45bfbe11533c4666cf8"
SRC_URI += "git://github.com/stretchr/testify;name=testify;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stretchr/testify"

# [github.com/jcmturner/gofork v1.0.0] git ls-remote https://github.com/jcmturner/gofork dc7c13fece037a4a36e2b3c69db4991498d30692
SRCREV_gofork = "dc7c13fece037a4a36e2b3c69db4991498d30692"
SRC_URI += "git://github.com/jcmturner/gofork;name=gofork;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jcmturner/gofork"

# [github.com/jcmturner/rpc/v2 v2.0.3] git ls-remote https://github.com/jcmturner/rpc 7f482067a47ba5c8f25f2bcae9ab99b3fed820e9
SRCREV_rpc-v2 = "7f482067a47ba5c8f25f2bcae9ab99b3fed820e9"
SRC_URI += "git://github.com/jcmturner/rpc;name=rpc-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jcmturner/rpc/v2"

# [github.com/git-lfs/gitobj/v2 v2.1.1] git ls-remote https://github.com/git-lfs/gitobj 30ed74dc07486af9f93f48999a7bebdd5d83001a
SRCREV_v2 = "30ed74dc07486af9f93f48999a7bebdd5d83001a"
SRC_URI += "git://github.com/git-lfs/gitobj;name=v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/git-lfs/gitobj/v2"

# [github.com/golang/groupcache v0.0.0-20241129210726-2c02b8208cf8] git ls-remote https://github.com/golang/groupcache 2c02b8208cf8c02a3e358cb1d9b60950647543fc
SRCREV_groupcache = "2c02b8208cf8c02a3e358cb1d9b60950647543fc"
SRC_URI += "git://github.com/golang/groupcache;name=groupcache;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang/groupcache"

# [github.com/alexbrainman/sspi v0.0.0-20210105120005-909beea2cc74] git ls-remote https://github.com/alexbrainman/sspi 909beea2cc7490802e4be2af0600202db533536b
SRCREV_sspi = "909beea2cc7490802e4be2af0600202db533536b"
SRC_URI += "git://github.com/alexbrainman/sspi;name=sspi;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/alexbrainman/sspi"

# [github.com/hashicorp/go-uuid v1.0.2] git ls-remote https://github.com/hashicorp/go-uuid 6195a4f20692188e0a389def25559731d1e130f9
SRCREV_go-uuid = "6195a4f20692188e0a389def25559731d1e130f9"
SRC_URI += "git://github.com/hashicorp/go-uuid;name=go-uuid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/go-uuid"

# [github.com/dpotapov/go-spnego v0.0.0-20210315154721-298b63a54430] git ls-remote https://github.com/dpotapov/go-spnego 298b63a544303a239753d04314aada5bdbad7e4a
SRCREV_go-spnego = "298b63a544303a239753d04314aada5bdbad7e4a"
SRC_URI += "git://github.com/dpotapov/go-spnego;name=go-spnego;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/dpotapov/go-spnego"

# [github.com/pmezard/go-difflib v1.0.0] git ls-remote https://github.com/pmezard/go-difflib 792786c7400a136282c1664665ae0a8db921c6c2
SRCREV_go-difflib = "792786c7400a136282c1664665ae0a8db921c6c2"
SRC_URI += "git://github.com/pmezard/go-difflib;name=go-difflib;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pmezard/go-difflib"

# [github.com/jcmturner/aescts/v2 v2.0.0] git ls-remote https://github.com/jcmturner/aescts 72347e1bd92aa67384e4f8c0e8a6d7cfaa716eea
SRCREV_aescts-v2 = "72347e1bd92aa67384e4f8c0e8a6d7cfaa716eea"
SRC_URI += "git://github.com/jcmturner/aescts;name=aescts-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jcmturner/aescts/v2"

# [github.com/jcmturner/gokrb5/v8 v8.4.2] git ls-remote https://github.com/jcmturner/gokrb5 663478bf457f1fc3275973bea5b7b787cd332015
SRCREV_v8 = "663478bf457f1fc3275973bea5b7b787cd332015"
SRC_URI += "git://github.com/jcmturner/gokrb5;name=v8;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jcmturner/gokrb5/v8"

# [github.com/git-lfs/wildmatch/v2 v2.0.1] git ls-remote https://github.com/git-lfs/wildmatch 87c05a427201f2fd4696fe110b25f20465cbeead
SRCREV_wildmatch-v2 = "87c05a427201f2fd4696fe110b25f20465cbeead"
SRC_URI += "git://github.com/git-lfs/wildmatch;name=wildmatch-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/git-lfs/wildmatch/v2"

# [github.com/xeipuuv/gojsonschema v0.0.0-20170210233622-6b67b3fab74d] git ls-remote https://github.com/xeipuuv/gojsonschema 6b67b3fab74d992bd07f72550006ab2c6907c416
SRCREV_gojsonschema = "6b67b3fab74d992bd07f72550006ab2c6907c416"
SRC_URI += "git://github.com/xeipuuv/gojsonschema;name=gojsonschema;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonschema"

# [github.com/jcmturner/dnsutils/v2 v2.0.0] git ls-remote https://github.com/jcmturner/dnsutils 90052734000be120c409677a88cb517e5b49dbf4
SRCREV_dnsutils-v2 = "90052734000be120c409677a88cb517e5b49dbf4"
SRC_URI += "git://github.com/jcmturner/dnsutils;name=dnsutils-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jcmturner/dnsutils/v2"

# [github.com/xeipuuv/gojsonpointer v0.0.0-20180127040702-4e3ac2762d5f] git ls-remote https://github.com/xeipuuv/gojsonpointer 4e3ac2762d5f479393488629ee9370b50873b3a6
SRCREV_gojsonpointer = "4e3ac2762d5f479393488629ee9370b50873b3a6"
SRC_URI += "git://github.com/xeipuuv/gojsonpointer;name=gojsonpointer;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonpointer"

# [github.com/leonelquinteros/gotext v1.5.0] git ls-remote https://github.com/leonelquinteros/gotext 1b8a993ae40a69bc9e9ed20a93b526c1e6b7d457
SRCREV_gotext = "1b8a993ae40a69bc9e9ed20a93b526c1e6b7d457"
SRC_URI += "git://github.com/leonelquinteros/gotext;name=gotext;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/leonelquinteros/gotext"

# [github.com/ssgelm/cookiejarparser v1.0.1] git ls-remote https://github.com/ssgelm/cookiejarparser ead01002df3bee9f6d64bfde0c7387bd2368a2e0
SRCREV_cookiejarparser = "ead01002df3bee9f6d64bfde0c7387bd2368a2e0"
SRC_URI += "git://github.com/ssgelm/cookiejarparser;name=cookiejarparser;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ssgelm/cookiejarparser"

# [github.com/jcmturner/goidentity/v6 v6.0.1] git ls-remote https://github.com/jcmturner/goidentity 836ef0c4025b66a750604bb79d41ace085366777
SRCREV_v6 = "836ef0c4025b66a750604bb79d41ace085366777"
SRC_URI += "git://github.com/jcmturner/goidentity;name=v6;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jcmturner/goidentity/v6"

# [github.com/xeipuuv/gojsonreference v0.0.0-20180127040603-bd5ef7bd5415] git ls-remote https://github.com/xeipuuv/gojsonreference bd5ef7bd5415a7ac448318e64f11a24cd21e594b
SRCREV_gojsonreference = "bd5ef7bd5415a7ac448318e64f11a24cd21e594b"
SRC_URI += "git://github.com/xeipuuv/gojsonreference;name=gojsonreference;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonreference"

# [github.com/inconshreveable/mousetrap v1.1.0] git ls-remote https://github.com/inconshreveable/mousetrap 4e8053ee7ef85a6bd26368364a6d27f1641c1d21
SRCREV_mousetrap = "4e8053ee7ef85a6bd26368364a6d27f1641c1d21"
SRC_URI += "git://github.com/inconshreveable/mousetrap;name=mousetrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/inconshreveable/mousetrap"

