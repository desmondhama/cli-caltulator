#gcc -time -std=c99 -v -x c main.c mathlib.c mathlib.h -o cli-caltulator
CC=gcc
CFLAGS=-time -std=c99 -v -x c -o cli-caltulator
FILES=main.c mathlib.c mathlib.h
Main:
	$(CC) $(CFLAGS) $(FILES)
	echo "\nDone making."
