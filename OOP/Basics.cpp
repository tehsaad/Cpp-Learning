#include <iostream>
using namespace std;

class Person{
public:
    Person(string name, int age, string gender) {      // Constructor
        this->name = name;
        this->age = age;                               //this-> is used to refer to the current object's member variables
        this->gender = gender;                         //Or used in Funtions inside the class to refer to the current object
    }   
    Person (const Person &p) {                              // Custom Copy Constructor
        this->name = p.name;
        this->age = p.age;
        this->gender = p.gender;
    }
    
    ~Person() {  // Deafult Called,  Destructor, 
        cout << "Person object destroyed." << endl;
    }

    string name;
    int age;
    string gender;
};  

void getinfo(Person &p);
int main() {
    Person p1("John", 30, "Male");
    Person p2(p1); // Default Copy constructor is called
    
    getinfo(p1);
    getinfo(p2);
    return 0;
} 

void getinfo(Person &p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Gender: " << p.gender << endl;
}


//Deep Copy Constructor: A deep copy constructor is used when an object contains pointers to dynamically allocated memory.
//In such cases, a deep copy constructor creates a new copy of the dynamically allocated memory for the new object, 
//rather than just copying the pointer. This ensures that each object has its own separate copy of the data,
//preventing issues like double deletion or unintended modifications.


//Shallow Copy Constructor: A shallow copy constructor, on the other hand, simply copies the values of the member variables
// from one object to another. If the object contains pointers to dynamically allocated memory, a shallow copy constructor will copy 
//the pointer values, leading to multiple objects pointing to the same memory location. This can result in problems like double 
//deletion or unintended modifications when one object modifies the shared data.