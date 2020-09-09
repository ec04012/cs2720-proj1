link: UnsortedList Student
	g++ -Wall -std=c++14 -g -pedantic-errors -o p1 UnsortedList.o UnsortedListDriver.cpp Student.o

Student: Student.cpp Student.h
	g++ -c -Wall -std=c++14 -g -pedantic-errors Student.cpp

UnsortedList: UnsortedList.cpp UnsortedList.h
	g++ -c -Wall -std=c++14 -g -pedantic-errors UnsortedList.cpp

run:
	./p1

clean:
	/bin/rm *.o p1