#ifndef STUDENT
#define STUDENT

#include <string>
using namespace std;

class Student {
   public:
    // Class constructors
    Student();                             // Default constructor, uses placeholder name and id
    Student(int const &, string const &);  // Param constructor, gets name and id as param

    // No destructor, the default destructor should work

    // get methods
    int getID() const;
    string getName() const;

    // set methods
    void setID(int const &);
    void setName(string const &);

    // Operator overloads
    friend bool operator==(Student const &, Student const &);
    friend ostream &operator<<(ostream &, Student const &);

   private:
    int id;
    string name;
};

#include "Student.cpp"

#endif
