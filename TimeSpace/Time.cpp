#include <iostream>
using namespace std;
/*
Time Complexity- is the Number of Calculations/iterations taking Place for 'n' number of inputs.
Slope of No. of Operations-n graph is Time Complexity

O(1)>O(log n)>O(n)>O(nlog n)>O(x2)O(x3)>O(2x)>O(n!)

1. Loop Shortcuts
No Loops:            Straight-line math operations or basic variable assignments always take O(1) (constant time).
Single Loop:         A standard loop counting up to n by 1 takes O(n) (linear time).
Dividing/Multiplying Loop: If your loop variable is halved (i /= 2) or doubled (i *= 2) on every iteration, it takes \(O(\log n)\) (logarithmic time).
Nested Loops: Multiply the loops. Two nested loops running up to n take n × n =  O(n²) (quadratic time).Consecutive Loops: Add the loops together. Two separate loops running to n one after the other take n + n = 2n, which simplifies to O(n).2.

Recusrsion: 
TC = Number of Calls * Work done in each call

*/


void O1();
void Ologn();

int main(){
    cout << "Enter a Number:";

    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        O1();
        break;
    case 2:
        Ologn();
        break;
    
    default:
        break;
    }
}

void O1(){
    cout << "O(1) \n Enter a Number:" << endl;
    int q; cin >> q; int sum = (q*(q+1))/2;
    cout << "Sum is:" << sum << endl;
}

void Ologn(){
    cout << "Using Binary Search, O(logn)" << endl;
    cout << "Enter the Target,1-10:";
    
int target; cin >>target;
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int n = sizeof(arr)/sizeof(int);

int x=0; int y =n-1;
while(x <= y){
    int mid = x +(y-x)/2;
 if(arr[mid]< target){
    x =mid+1;
}
 else if(arr[mid]>target){
    y=mid-1;
}
else{
    cout << mid << "Index" << arr[mid]<< endl;
}
} 

}
