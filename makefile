CFLAGS = -Wall -g
CC = gcc
AR = ar

all: txtfind isort

txtfind: txtfind.o
	$(CC) $(CFLAGS) -o txtfind txtfind.o

txtfind.o:txtfind.c
	$(CC) $(CFLAGS) -c txtfind.c -o txtfind.o

isort: isort.o main.o
	$(CC) $(CFLAGS) -o isort isort.o main.o

main.o:main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

isort.o: isort.c
	$(CC) $(CFLAGS) -c isort.c -o isort.o

.PHONY: clean all

clean: 
	rm -f *.o txtfind isort
