#include <iostream>
using namespace std;

void Rev(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

int main(){

    int num[]= {0,1,2,3,4,5,6,7,8,9};
    Rev(num,10);

    for(int e : num){
        cout << e << " ";
    }

    return 0;
}