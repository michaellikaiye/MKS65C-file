all: file.o
	gcc -o hello file.o

file.o:file.c
	gcc -c file.c

run:
	./hello

clear:
	rm *.o
