# Makefile for exam2

CXX = g++
OPTS = -Wall -Werror -Wno-non-virtual-dtor

demo: main.o shape.o circle.o square.o
	$(CXX) main.o shape.o circle.o square.o -o demo

main.o: main.cpp circle.h square.h
	$(CXX) $(OPTS) -c main.cpp -o main.o

shape.o: shape.cpp shape.h
	$(CXX) $(OPTS) -c shape.cpp -o shape.o

square.o: square.cpp square.h shape.h
	$(CXX) $(OPTS) -c square.cpp -o square.o

circle.o: circle.cpp circle.h shape.h
	$(CXX) $(OPTS) -c circle.cpp -o circle.o

test: demo
	./demo 

clean:
	rm -f *.o *~ demo
