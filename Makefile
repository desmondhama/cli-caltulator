CC=gcc
CFLAGS=-time -std=c99 -v -m64 -O2 -x c -o cli-caltulator
FILES=main.c mathlib.c mathlib.h
Main:
	$(CC) $(CFLAGS) $(FILES)
	printf "\nDone making."
