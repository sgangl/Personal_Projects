CC = g++
CFLAGS = -g -Wall -std=c++11

all: DictionaryPosition

DictionaryPosition: Permutation.o main.o
	$(CC) $(CFLAGS) Permutation.o main.o -o DictionaryPosition
	
Permutation.o: Permutation.h Permutation.cpp
	$(CC) $(CFLAGS) -c Permutation.cpp

main.o: Permutation.h Permutation.cpp main.cpp
	$(CC) $(CFLAGS) -c main.cpp
	
clean:
	$(RM) DictionaryPosition *.o
