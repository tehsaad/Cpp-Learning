#include <iostream>
using namespace std;

//A friend function is not a member of the class, but it can access the class's private and protected members.


class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
    }

    friend void display(Student s);   //Friend Funtion
};

void display(Student s) {
    cout << "Name: " << s.name << endl;
    cout << "Age : " << s.age << endl;
}

int main() {
    Student s1("Saad", 18);

    display(s1);
}