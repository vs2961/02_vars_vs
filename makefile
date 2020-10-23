all: test.c
	gcc -o testing test.c

run:
	./testing
