#include <iostream>
using namespace std;
/*
Time Complexity- is the Number of Calculations/iterations taking Place for 'n' number of inputs.
Slope of No. of Operations-n graph is Time Complexity

O(1)>O(log n)>O(n)>O(nlog n)>O(x2)O(x3)>O(2x)>O(n!)
*/
//

void O1();
void On();
void On2();

int main(){
    cout << "Enter a Number:";

    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        O1();
        break;
    //case 2:
        
     //   break;
    
    default:
        break;
    }
}

void O1(){
    cout << "O(1) \n Enter a Number:" << endl;
    int q; cin >> q; int sum = (q*(q+1))/2;
    cout << "Sum is:" << sum << endl;
}
