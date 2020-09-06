
UnsortedList: UnsortedList.cpp UnsortedList.h
	g++ -Wall -std=c++14 -g -pedantic-errors -o UnsortedList UnsortedList.cpp

Driver: UnsortedListDriver.cpp
	g++ -Wall -std=c++14 -g -pedantic-errors -o UnsortedListDriver UnsortedListDriver.cpp UnsortedList.cpp

clean:
	/bin/rm *.o