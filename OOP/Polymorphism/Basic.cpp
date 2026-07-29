 #include <iostream>
 using namespace std;

 //Polymorphism is the duality of an object while treated in diffrent manners.
 
// 1-Compile Time P
//E.g,  Construtor Overloading,Funtion Overloading, Operator Overloading

// 2-Run-Time P
//E.g,  Funtion Overiding(Funtions with Same Name Created in Both Parent and Child Class with diffrent Objectives)
//  Both Classes Ride the Funtion in diffrent ways

 class Parnet{
public:
    void Print(){
        cout << "A" << endl;
    }
    virtual void hello(){
        cout << "Hello1";
    }
 };

 class Child : public Parnet{   // Child Class Inheits Parent Class Funtion But Run-Time Polymorphism occus
public:
    void Print(){
        cout << "B" << endl;
    }
     void hello(){
        cout << "Hello1";
    }
 };

int main(){
    Child c1;
    c1.Print();
    c1.hello();
    return 0;
}

//Virtual Funtions are Dynamic in nature
//Called during Runtime
//Keyword--Funtion
//Virtual  Funtions are to be re-defined by the derived class, called as Virtual Polymorphism

