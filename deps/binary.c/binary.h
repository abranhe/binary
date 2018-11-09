#ifndef BINARY_H
#define BINARY_H

//
// binary.h
//
// MIT licensed.
// Copyright (c) Abraham Hernandez <abraham@abranhe.com>
//

#define bool int

#ifdef __cplusplus
extern "C" {
#endif

bool
is_binary(long binary);

long
to_decimal(long long binary);

long long to_binary(long number);

#ifdef __cplusplus
}
#endif

#endif // BINARY_H
