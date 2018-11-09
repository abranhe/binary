//
// An small library to work with
// binary numbers.
//
// binary.c
//
// MIT licensed.
// Copyright (c) Abraham Hernandez <abraham@abranhe.com>
//

#include <stdbool.h>

bool
is_binary (long long binary) {
	bool status = true;
	while(true) {
		if (binary == 0) break;
		else {
			int tmp = binary % 10;
			if(tmp > 1) {
				status = false;
				break;
			}
			binary = binary / 10;
		}
	}
	return status;
}

long
to_decimal (long long binary) {
	if(!is_binary(binary)) return -1;

	int decimal = 0;
	int multiplier = 1;

	while (binary != 0) {
		decimal += (binary % 10) * multiplier;
		binary /= 10;
		multiplier *= 2;
	}
	return decimal;
}

long long to_binary(long number) {
	long long binary = 0;
	int remainder;
	int i = 1;

	while (number != 0) {
		remainder = number % 2;
		number /= 2;
		binary += remainder * i;
		i *= 10;
  }
	return binary;
}

// TODO:
// add_binary()
// substract_binary() ...
