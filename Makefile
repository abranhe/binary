PREFIX ?= /usr/local

SRC = binary-cli.c deps/binary.c/binary.c

OBJ_SRC = $(SRC:.c=.o)

CFLAGS = -D_GNU_SOURCE -std=c99 -I deps/binary.c/

LFLAGS = -Wall -Wno-format-y2k -W -Wstrict-prototypes \
	-Wpointer-arith -Wreturn-type -Wcast-qual -Wwrite-strings -Wswitch \
	-Wshadow -Wcast-align -Wbad-function-cast -Wchar-subscripts -Winline \
	-Wnested-externs -Wredundant-decls

binary: $(OBJ_SRC)
	$(CC) $(OBJ_SRC) -o $@

.SUFFIXES: .c .o
.c.o:
	$(CC) $< $(CFLAGS) $(LFLAGS) -c -o $@

install: binary
	cp -f binary $(PREFIX)/bin/binary

uninstall:
	rm -f $(PREFIX)/bin/binary

run-test: binary
	bash ./test.sh

clean:
	rm -f binary *.o deps/**/*.o *.gc{ov,da,no}

.PHONY: clean run-test install uninstall
