export sites = "golang.org/x/net:golang.org/x/net:force \
           golang.org/x/sys:golang.org/x/sys:force \
           gopkg.in/yaml.v3:gopkg.in/yaml.v3:force \
           golang.org/x/sync:golang.org/x/sync:force \
           golang.org/x/text:golang.org/x/text:force \
           golang.org/x/crypto:golang.org/x/crypto:force \
           github.com/pkg/errors:github.com/pkg/errors:force \
           github.com/spf13/cobra:github.com/spf13/cobra:force \
           github.com/spf13/pflag:github.com/spf13/pflag:force \
           github.com/olekukonko/ts:github.com/olekukonko/ts:force \
           github.com/avast/retry-go:github.com/avast/retry-go:force \
           github.com/jmhodges/clock:github.com/jmhodges/clock:force \
           github.com/git-lfs/pktline:github.com/git-lfs/pktline:force \
           github.com/mattn/go-isatty:github.com/mattn/go-isatty:force \
           github.com/rubyist/tracerx:github.com/rubyist/tracerx:force \
           github.com/davecgh/go-spew:github.com/davecgh/go-spew:force \
           github.com/git-lfs/go-netrc:github.com/git-lfs/go-netrc:force \
           github.com/stretchr/testify:github.com/stretchr/testify:force \
           github.com/jcmturner/gofork:github.com/jcmturner/gofork:force \
           github.com/jcmturner/rpc/v2:github.com/jcmturner/rpc/v2/v2:force \
           github.com/git-lfs/gitobj/v2:github.com/git-lfs/gitobj/v2:force \
           github.com/golang/groupcache:github.com/golang/groupcache:force \
           github.com/alexbrainman/sspi:github.com/alexbrainman/sspi:force \
           github.com/hashicorp/go-uuid:github.com/hashicorp/go-uuid:force \
           github.com/dpotapov/go-spnego:github.com/dpotapov/go-spnego:force \
           github.com/pmezard/go-difflib:github.com/pmezard/go-difflib:force \
           github.com/jcmturner/aescts/v2:github.com/jcmturner/aescts/v2:force \
           github.com/jcmturner/gokrb5/v8:github.com/jcmturner/gokrb5/v8/v8:force \
           github.com/git-lfs/wildmatch/v2:github.com/git-lfs/wildmatch/v2:force \
           github.com/xeipuuv/gojsonschema:github.com/xeipuuv/gojsonschema:force \
           github.com/jcmturner/dnsutils/v2:github.com/jcmturner/dnsutils/v2:force \
           github.com/xeipuuv/gojsonpointer:github.com/xeipuuv/gojsonpointer:force \
           github.com/leonelquinteros/gotext:github.com/leonelquinteros/gotext:force \
           github.com/ssgelm/cookiejarparser:github.com/ssgelm/cookiejarparser:force \
           github.com/jcmturner/goidentity/v6:github.com/jcmturner/goidentity/v6:force \
           github.com/xeipuuv/gojsonreference:github.com/xeipuuv/gojsonreference:force \
           github.com/inconshreveable/mousetrap:github.com/inconshreveable/mousetrap:force"

do_compile:prepend() {
    cd ${S}/src/import
    for s in $sites; do
        site_dest=$(echo $s | cut -d: -f1)
        site_source=$(echo $s | cut -d: -f2)
        force_flag=$(echo $s | cut -d: -f3)

        mkdir -p vendor.copy/$site_dest

        # create a temporary exclude file
        exclude_file=$(mktemp)

        find vendor.fetch/$site_source -type d -print0 |         xargs -0 du -sBM 2>/dev/null |         awk '{if ($1+0 > 500) print substr($0, index($0,$2))}' |         sed 's|^vendor.fetch/||' > "$exclude_file"

        if [ -n "$force_flag" ]; then
            echo "[INFO] $site_dest: force copying .go files"
            rm -rf vendor.copy/$site_dest
            rsync -a                 --exclude='vendor/'                 --exclude='.git/'                 --exclude-from="$exclude_file"                 vendor.fetch/$site_source/ vendor.copy/$site_dest
        else
            if [ -n "$(ls -A vendor.copy/$site_dest/*.go 2> /dev/null)" ]; then
                echo "[INFO] vendor.fetch/$site_source -> $site_dest: go copy skipped (files present)"
                true
            else
                echo "[INFO] $site_dest: copying .go files"
                rsync -a                     --exclude='vendor/'                     --exclude='.git/'                     --exclude-from="$exclude_file"                     vendor.fetch/$site_source/ vendor.copy/$site_dest
            fi
        fi

        rm -f "$exclude_file"
    done
}
