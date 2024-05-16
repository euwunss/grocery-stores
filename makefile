# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation

CC = g++
CFLAGS = -g -Wall

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o store.o stores.o neighborhood.o neighborhoods.o
	$(CC) $(CFLAGS) -o main main.o store.o stores.o neighborhood.o neighborhoods.o

# The main.o target

main.o: main.cpp store.h stores.h neighborhoods.h
	$(CC) $(CFLAGS) -c main.cpp

store.o: store.h

stores.o: stores.h store.h

neighborhood.o: neighborhood.h stores.h

neighborhoods.o: neighborhoods.h neighborhood.h