CC = gcc
CFLAGS = -g -Wall -Wextra -std=c99

PROGS = cw06-01 cw06-02 cw06-03 cw06-04 cw06-05 cw06-06

all: $(PROGS)

cw06-01: cw06-01.c
	$(CC) $< -o $@ $(CFLAGS) -lm

cw06-02: cw06-02.c
	$(CC) $< -o $@ $(CFLAGS) -lm

cw06-03: cw06-03.c
	$(CC) $< -o $@ $(CFLAGS) -lm

cw06-04: cw06-04.c
	$(CC) $< -o $@ $(CFLAGS) -lm

cw06-05: cw06-05.c
	$(CC) $< -o $@ $(CFLAGS)

cw06-06: cw06-06.c
	$(CC) $< -o $@ $(CFLAGS)

clean:
	rm $(PROGS)

cleantmp:
	rm *~
