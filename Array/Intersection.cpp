#include <iostream>
using namespace std;

int main(){
    
    int num1[5]={1,2,3,4,5};
    int num2[6]={4,5,6,7,8,9};

    int n =sizeof(num1)/sizeof(num1[0]);
    int m =sizeof(num2)/sizeof(num2[0]);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(num1[i]==num2[j]){
                cout<<num1[i]<< endl;
            }
        }
    }
    return 0;
}