#include <iostream>
using namespace std;

//A friend class allows every member function of another class to access its private and protected members.


class Student {

private:
    string name = "Saad";
    int marks = 95;

    friend class Teacher;
};

class Teacher {

public:
    void show(Student s) {
        cout << s.name << endl;
        cout << s.marks << endl;
    }
};

int main() {

    Student s;
    Teacher t;

    t.show(s);
}