CC = gcc
CFLAGS = -g -Wall -Wextra

PROGS = cw08-01 cw08-02 cw08-03 cw08-04 cw08-05

all: $(PROGS)

cw08-01: cw08-01.c
	$(CC) $< -o $@ $(CFLAGS)

cw08-02: cw08-02.c
	$(CC) $< -o $@ $(CFLAGS)

cw08-03: cw08-03.c
	$(CC) $< -o $@ $(CFLAGS) -lm

cw08-04: cw08-04.c
	$(CC) $< -o $@ $(CFLAGS) -lm

cw08-05: cw08-05.c
	$(CC) $< -o $@ $(CFLAGS)

clean:
	rm $(PROGS)

cleantmp:
	rm *~
