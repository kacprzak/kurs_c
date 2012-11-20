CC = gcc
CFLAGS = -g -Wall -Wextra -std=c99

PROGS = cw07-01 cw07-02 cw07-03 cw07-04 cw07-05 cw07-06

all: $(PROGS)

cw07-01: cw07-01.c
	$(CC) $< -o $@ $(CFLAGS)

cw07-02: cw07-02.c
	$(CC) $< -o $@ $(CFLAGS) -lm

cw07-03: cw07-03.c
	$(CC) $< -o $@ $(CFLAGS) -lm

cw07-04: cw07-04.c
	$(CC) $< -o $@ $(CFLAGS)

cw07-05: cw07-05.c
	$(CC) $< -o $@ $(CFLAGS)

cw07-06: cw07-06.c
	$(CC) $< -o $@ $(CFLAGS)

clean:
	rm $(PROGS)

cleantmp:
	rm *~
