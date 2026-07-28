#include <iostream>
using namespace std;

int max(int a, int b);   //Just Type,Identifier and Parameter List, No Function Body 
//Declare Every Function First, Cpp  Performs a top-down approach, 
//So we need to declare the function before using it.
      
 int main() {
    
cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;

    int maximum = max(num1, num2); //Function Call
    cout << "The maximum number is: " << maximum << endl;

    return 0;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}