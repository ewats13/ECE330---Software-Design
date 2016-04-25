CXX = g++
OPTS = -Wall -Werror -Wno-non-virtual-dtor

demo: main.o employee.o personnel.o payroll.o subject.o updatable.o
	$(CXX) main.o employee.o personnel.o payroll.o subject.o updatable.o -o demo

main.o: main.cpp employee.h personnel.h payroll.h
	$(CXX) $(OPTS) -c main.cpp -o main.o

employee.o: employee.cpp employee.h subject.h
	$(CXX) $(OPTS) -c employee.cpp -o employee.o 

personnel.o: personnel.cpp personnel.h updatable.h
	$(CXX) $(OPTS) -c personnel.cpp -o personnel.o

payroll.o: payroll.cpp payroll.h updatable.h
	$(CXX) $(OPTS) -c payroll.cpp -o payroll.o

subject.o: subject.cpp subject.h updatable.h
	$(CXX) $(OPTS) -c subject.cpp -o subject.o

updatable.o: updatable.cpp updatable.h subject.h
	$(CXX) $(OPTS) -c updatable.cpp -o updatable.o

test: demo
	./demo

clean:
	rm -f *.o *~ demo

