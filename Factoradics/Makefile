CC = g++
CFLAGS = -g -Wall -std=c++11

all: main

main: Permutation.o main.o
	$(CC) $(CFLAGS) Permutation.o main.o -o main
	
Permutation.o: Permutation.h Permutation.cpp
	$(CC) $(CFLAGS) -c Permutation.cpp

main.o: Permutation.h main.cpp
	$(CC) $(CFLAGS) -c main.cpp
	
clean:
	$(RM) main *.o
