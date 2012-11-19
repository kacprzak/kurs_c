CC = gcc
CFLAGS = -g -Wall -Wextra

PROGS = cw09-01 cw09-02 cw09-03 cw09-04

all: $(PROGS)

cw09-01: cw09-01.c
	$(CC) $< -o $@ $(CFLAGS)

cw09-02: cw09-02.c
	$(CC) $< -o $@ $(CFLAGS)

cw09-03: cw09-03.c
	$(CC) $< -o $@ $(CFLAGS) -lm

cw09-04: cw09-04.c
	$(CC) $< -o $@ $(CFLAGS) -lm

clean:
	rm $(PROGS)

cleantmp:
	rm *~
