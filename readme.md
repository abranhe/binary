<p align="center">
	<br>
	<img src="https://cdn.abranhe.com/projects/binary/logo.svg">
	<br>
	<br>
	<b>binary cli</b>: The command line interface to work with binary numbers
	<br>
</p>

<p align="center">
	<a href="https://travis-ci.org/abranhe/binary"><img src="https://img.shields.io/travis/abranhe/binary.svg?logo=travis" /></a>
	<a href="https://github.com/abranhe"><img src="https://abranhe.com/badge.svg"></a>
	<a href="https://cash.me/$abranhe"><img src="https://cdn.abranhe.com/badges/cash-me.svg"></a>
	<a href="https://patreon.com/abranhe"><img src="https://cdn.abranhe.com/badges/patreon.svg" /></a>
	<a href="https://github.com/abranhe/binary/blob/master/license"><img src="https://img.shields.io/github/license/abranhe/binary.svg" /></a>

  <br>
  <br>
</p>
In mathematics and digital electronics, a binary number is a number expressed in the **base-2 numeral system** or **binary numeral system**, which uses only two symbols: typically `0` and `1`.


## Installation

*Installing using [Clib](https://github.com/clibs/clib)*

```sh
$ clib install abranhe/binary
```

## CLI

*The options of binary*

```
An small library to work with binary numbers

 Usage:

   $ binary <option> <input>

 Options:

   -is, --is-binary   check if a number is binary
        --to-decimal  convert a binary number to decimal
        --to-binary  convert a decimal number to binary
   -v,  --version     output version number
   -h,  --help        output usage information

 Example:

   $ binary --is-binary 10101000
   true
   $ binary --to-decimal 1011
   7
```

## Related

- [binary.c][binary]: API for this module written in C.

## Team

|[![Carlos Abraham Logo][abranhe-img]][abranhe]|
| :-: |
| [Carlos Abraham][abranhe] |

## License

[MIT][license] License © [Carlos Abraham][abranhe]

<!-------------------- Links ------------------------>
[abranhe]: https://github.com/abranhe
[abranhe-img]: https://avatars3.githubusercontent.com/u/21347264?s=50
[license]: https://github.com/abranhe/binary/blob/master/license
[travis-badge]: https://img.shields.io/travis/abranhe/binary.svg
[travis-status]: https://travis-ci.org/abranhe/binary
[binary]: https://github.com/abranhe/binary.c
