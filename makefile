CFLAGS = -Wall -g
CC = gcc
AR = ar

all: txtfind isort

txtfind: txtfind.o
	$(CC) -o txtfind txtfind.o

txtfind.o:txtfind.c
	$(CC) -c txtfind.c -o txtfind.o

isort: isort.o main.o
	$(CC) -o isort isort.o main.o

main.o:main.c
	$(CC) -c main.c -o main.o

isort.o: isort.c
	$(CC) -c isort.c -o isort.o

.PHONY: clean all

clean: 
	rm -f *.o txtfind isort
