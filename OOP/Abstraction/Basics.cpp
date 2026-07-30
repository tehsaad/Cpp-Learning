//Abstraction--OOP
// Hiding Sensitive Information
//Acess Modifiers

#include <iostream>
using namespace std;

//Abstract Class
//-Only a Parent Class
//-Never Creates an Object
//-Blueprint(Abstract Class) of Bluepints(Classes)

class Ab{
public:
    virtual void reps() = 0;    // Blueprint, Pure Abstract Funtion
};

class Plancks : public Ab{
    void reps (){
        int reps =10;
        cout << "Reps =" << reps << endl;
    }
};

int main(){

}

//Static variable in Funtion Remains alive for the whole programs
//Static Variable in Class  is a Valid and Same for all Objects in a the class  