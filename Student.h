#ifndef STUDENT
#define STUDENT

#include <string>
using namespace std;

class Student {
  public:
    // Class constructors
    Student();            // Default constructor, uses placeholder name and id
    Student(int, string); // Param constructor, gets name and id as param

    // No destructor, the default destructor should work

    // get methods
    int getID();
    string getName();

    // set methods
    void setID(int);
    void setName(string);

  private:
    int id;
    string name;
};

#include "Student.cpp"

#endif
