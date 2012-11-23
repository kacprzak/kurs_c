CC = g++
CFLAGS = -g -Wall -Wextra

PROGS = cw06-02 cw08-05

all: $(PROGS)

cw06-02: cw06-02.cpp
	$(CC) $< -o $@ $(CFLAGS)

cw08-05: cw08-05.cpp
	$(CC) $< -o $@ $(CFLAGS)

clean:
	rm $(PROGS)

cleantmp:
	rm *~
