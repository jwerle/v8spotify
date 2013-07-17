SRC := $(wildcard include/*.h)
SRC += $(wildcard src/*.cc)
OBJ := libv8spotify.so
TEST := spotifytest
PREFIX := /usr/local
FLAGS := -Iinclude -I$(PREFIX)/include/v8
LINKS := -lspotify
OUTDIR := out

test:
	@g++ $(SRC) $(FLAGS) $(LINKS) test.cc -o $(TEST)
	@$(TEST)
ifndef PRESERVE
	@rm -rf $(TEST)
endif

build:
	@if test -d; then rm -rf $(OUTDIR)/ && mkdir $(OUTDIR)/; else mkdir $(OUTDIR)/; fi;
	g++ -fpic -c $(SRC) $(FLAGS)
	@g++ $(SRC) $(FLAGS) $(LINKS) -shared -o $(OUTDIR)/$(OBJ)

install: test build
	@cp ./include/*.h $(PREFIX)/include
	@cp ./$(OUTDIR)/$(OBJ) $(PREFIX)/lib

.PHONY: test build