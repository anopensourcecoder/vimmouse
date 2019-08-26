# vim mouse
VERSION = 0.0.1
CC      = /usr/bin/gcc
CFLAGS  = -Wall -g
LDFLAGS = -lX11 -lXtst -lpthread

PREFIX = /usr/local

SRC = vimmouse.c
BIN = vimmouse

all: $(BIN)

$(BIN): $(SRC) config.h
	$(CC) $(CFLAGS) -o $(BIN) $(SRC) $(LDFLAGS)

clean:
	rm -f $(BIN)

install: all
	mkdir -p $(PREFIX)/bin
	cp -f $(BIN) $(PREFIX)/bin
	chmod 755 $(PREFIX)/bin/$(BIN)

uninstall:
	rm -f $(PREFIX)/bin/$(BIN)
