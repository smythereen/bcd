# bcd — binary-coded decimal conversions

`bcd` converts between packed BCD buffers and ASCII, and between packed or
nibble-swapped (`x`) BCD and C integers of several widths. Digit ranges are
counted from a starting digit to an ending digit in the buffer. `dec2hex` and
`hex2dec` convert a value between decimal-looking and hexadecimal-looking
digit encodings.

It builds with the [base](https://github.com/smythereen/base) unit make system, which handles C, C++, and Rust, including large mixed-language projects.

## Public interface (`bcd.h`)

- `ascii2bcd` / `bcd2ascii` / `bcd_digit`
- `bcd2huge` / `huge2bcd` and the `x` variants (`bcd2xhuge` / `xhuge2bcd`)
- `bcd2long` / `long2bcd` and `bcd2xlong` / `xlong2bcd`
- `bcd2short` / `short2bcd` and `bcd2xshort` / `xshort2bcd`
- `bcd2char` / `char2bcd` and `bcd2xchar` / `xchar2bcd`
- `dec2hex` / `hex2dec`

`bcdlocal.h` is an implementation header, not an aggregate application API.

## Dependencies and build

Use this directory as `bcd/` inside a [base](https://github.com/smythereen/base)
project, beside the root `rules.mak` and `targets.mak`:

```sh
export UNITS_CATALOG_URL=https://unit-catalog.dejavu-archive.workers.dev
./repo/repo.sh add bcd
HOME=$PWD make -C bcd header library product
```

`UNIT.deps` requires `sys`. The makefile links `-lsys`. Sources include
`common.h` from `sys`. Headers export to `cmn/`, the archive to `lib/libbcd.a`,
and the `bcd` check program to `bin/`.

## C and C++

This unit is usable from **C and C++**. Its public header already supplies
`extern "C"` guards. Compile the implementation `.c` files with GCC and link
that C library into your C++ application with G++; do not reinterpret the
legacy C source as C++.

```c
#include <bcd.h>
int main(void) {
    uchar buf[4];
    /* ascii2bcd returns the number of packed bytes written, 0 only on NULL input */
    return ascii2bcd(buf, "1234", 4) != 2;
}
```

Confirm packed layout and digit numbering against `bin/bcd` when they matter.
From a project root with headers in `cmn/` and built libraries in `lib/`:

```sh
gcc -std=gnu11 -Icmn smoke.c -Llib \
  -Wl,--start-group -lbcd -lsys -Wl,--end-group -o bcd-smoke
```

## Programs

`bcd.c` builds the `bcd` check program (`Program To Verify BCD Library
Functions`). It accepts subcommands such as `dec2hex` and `hex2dec`.

## Verification

The Guardian tree already built this unit with plain `make` in the established
base layout, including the `bcd` program. This publication is a source
snapshot, not a fresh clean rebuild in a separate tree. C++ linkage guards
were inspected.

## Source and license

Published from the current Guardian unit directory as a clean snapshot, not
its private Git history. C/header/makefile bytes are preserved; build outputs,
backups, and the compiled `bcd` binary are excluded. This guide and `UNIT.deps`
are documentation additions. No release tag is created by this publication.
See `LICENSE` and `LICENSES/` for the existing Apache-2.0 OR GPL-2.0-or-later
licensing.
