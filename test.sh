#!/bin/sh
#!/bin/bash

typeset -i tests=0

function describe {
  let tests+=1
  description="$1"
}

function assert {
  if [[ "$1" == "$2" ]]; then
    printf "\033[32m.\033[0m"
  else
    printf "\033[31m\nFAIL: $description\033[0m: '$1' != '$2'\n"
    exit 1
  fi
}

describe "Help"
  ./binary --help > /dev/null 2>&1
  assert $? 0

describe "Help: short flag"
  ./binary -h > /dev/null 2>&1
  assert $? 0

describe "Version"
  ./binary --version > /dev/null 2>&1
  assert $? 0

describe "Version: short flag"
  ./binary -v > /dev/null 2>&1
  assert $? 0

describe "Execute: one argument"
  ./binary foo > /dev/null 2>&1
  assert $? 1

describe "Execute: more than two arguments"
  ./binary foo bar baz > /dev/null 2>&1
  assert $? 1

describe "Execute: should work"
  assert `./binary "--to-binary" "7"` 111
  assert `./binary "--to-binary" "19"` 10011
  assert `./binary "--to-binary" "3"` 11

  assert `./binary "--to-decimal" "111"` 7
  assert `./binary "--to-decimal" "10011"` 19
  assert `./binary "--to-decimal" "11"` 3

  assert `./binary "-is" "111"` binary
  assert `./binary "-is" "7777777"` non-binary

printf "\033[32m\n(✓) Passed $tests assertions without errors\033[0m\n"

exit 0
