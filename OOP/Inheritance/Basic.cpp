#include <iostream>
using namespace std;

//Types
//  Single
//  Multi
//  Hierarichal
//  

class Person {
public:
    string name;
    int age;
Person(string n, int a){
    name = n;
    age = a;
}
};


class Student : public Person {  // : Mode of Inhertitance 
    
public:
    int rn;

Student( string n, int a, int rn) : Person(n, a) { //Child class constructor calling parent class constructor
    this->rn = rn;
}

void getinfo(Student s){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll Number: " << rn << endl;
}

};

int main(){

    Student s1("Bob", 18, 11);
    s1.getinfo(s1);
}