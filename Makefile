link: UnsortedList Driver
	g++ -Wall -std=c++14 -g -pedantic-errors -o p1 UnsortedList.o UnsortedListDriver.o

UnsortedList: UnsortedList.cpp UnsortedList.h
	g++ -c -Wall -std=c++14 -g -pedantic-errors UnsortedList.cpp

Driver: UnsortedListDriver.cpp
	g++ -c -Wall -std=c++14 -g -pedantic-errors UnsortedListDriver.cpp

run: link
	./p1

clean:
	/bin/rm *.o *.out p1