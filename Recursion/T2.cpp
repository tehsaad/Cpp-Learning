#include <iostream>
using namespace std;

int Sum(int num){
    if(num == 0){
        return 0;
    }
    return num%10 + Sum(num/10);
}

int main(){
    cout << "Enter a Number: ";
    int num;
    cin >> num;
    cout << "Sum of Digits of the Number " << num << " is: " << Sum(num) << endl;
    return 0;
}