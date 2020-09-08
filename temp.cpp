#include <iostream>
#include "Student.h"
using namespace std;

// Used to test Student Class

int main() {
	cout << "Hello World" << endl;
	Student s1 = Student(117, "Eric");
	cout << s1.getID() << " " << s1.getName() << endl;
	s1.setID(256);
	cout << s1.getID() << " " << s1.getName() << endl;
	s1.setName("Jane");
	cout << s1.getID() << " " << s1.getName() << endl;

	Student s2 = Student(360, "Eyre");
	cout << s2.getID() << " " << s2.getName() << endl;

	cout << (s2==s1) << endl;

	s2.setID(256);
	cout << s2.getID() << " " << s2.getName() << endl;

	cout << (s2==s1) << endl;

	cout << endl << "Here" << endl;	
	cout << s1 << endl << s2 << endl;
}