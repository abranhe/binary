//
// See for more details:
// https://github.com/abranhe/binary.c
//
// cli.c
//
// MIT licensed.
// Copyright (c) Abraham Hernandez <abraham@abranhe.com>
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "binary.h"

#define VERSION "1.0.4"

const char
*show_help() {
 return "\n\
 An small library to work with binary numbers\n\n\
 Usage:\n\n\
   $ binary <option> <input> \n\n\
 Options:\n\n\
   -is, --is-binary   check if a number is binary\n\
        --to-decimal  convert a binary number to decimal\n\
        --to-binary  convert a decimal number to binary\n\
   -v,  --version     output version number\n\
   -h,  --help        output usage information\n\n\
 Example:\n\n\
   $ binary --is-binary 10101000\n\
   true\n\
   $ binary --to-decimal 1011\n\
   7\n\n";
}

/* CLI. */
int
main(int argc, char **argv) {
  char *a = argv[1];
  char *b = argv[2];

  if (argc == 2) {
    if (!strcmp(a, "-v") || !strcmp(a, "--version")) {
      printf("%s\n", VERSION);
      return 0;
    }

    if (!strcmp(a, "-h") || !strcmp(a, "--help")) {
			printf("%s", show_help());
      return 0;
    }
  }

	if (argc == 3) {
		if (!strcmp(a, "-is") || !strcmp(a, "--is-binary")) {
			char *pb;
			is_binary(strtoll(b, &pb, 0))
				? printf("binary\n")
				: printf("non-binary\n");
			return 0;
		}

		if (!strcmp(a, "--to-decimal")) {
			char *pb;
			printf("%ld\n", to_decimal(strtoll(b, &pb, 0)));
			return 0;
		}

		if (!strcmp(a, "--to-binary")) {
			char *pb;
			printf("%lld\n", to_binary(strtol(b, &pb, 0)));
			return 0;
		}
	}

  if (argc != 3) {
    fprintf(stderr, "\033[31mBinary expects two arguments.\n\033[0m\n");
		fprintf(stderr, "\033[31mSee `--help` for more details.\033[0m\n");
    return 1;
  }
  return 0;
}
