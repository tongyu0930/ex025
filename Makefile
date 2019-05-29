SHELL := /bin/bash

stats: stats.o array.o
	g++ -o stats stats.o array.o

array.o: array.h array.cpp
	g++ -c array.cpp

stats.o: stats.cpp
	g++ -c stats.cpp	

clean:
	rm *.o
	rm stats