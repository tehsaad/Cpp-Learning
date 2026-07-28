#include <iostream>
using namespace std;

class Student {
public:
    string name;            //Class creates sussceive Memory for its Members
    int age;
    int rollNumber;
};

void WriteStudentInfo(Student &student)         //Given a Address of Student Object, we can write its Members
{
    cout << "Enter Student Name: ";
    getline(cin, student.name);                //Student==Class Object, student.name==Member of Class Object, 
                                               //getline(cin, student.name)==Write to Member of Class Object
    cout << "Enter Student Age: ";
    cin >> student.age;

    cout << "Enter Student Roll Number: ";
    cin >> student.rollNumber;
}

void displayStudentInfo(const Student &student)    
//Constatn Means Members of Class Object will not be Modified,// Given a Address of Student Object, we can read its Members
// And object is passed by reference to avoid copying the entire object, which can be inefficient for large objects.    
{
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
}

int main()
{
    Student student1;      // Declare an object of the Student class

    WriteStudentInfo(student1);
    displayStudentInfo(student1);

    return 0;
}