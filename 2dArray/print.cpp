#include <iostream>
using namespace std;

void print(int nums[][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << nums[i][j] << " ";
        }
    }
    
}

int main(){

int nums[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            nums[i][j]=i+j+1;
        }
    }
    print(nums);
    
return 0;
}