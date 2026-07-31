#include <iostream>
using namespace std;

int main(){

    int nums[]={0,1,12,19,20,55,78,95,1050,3756,4236,6587,15820};
    int n = size(nums);
    cout << "Enter the Target:"  ;
    int target; cin >> target ;
int start=0;
int end = n-1;
int mid;
    for(int i=0;i<n;i++){
        mid = (start+end)/2;

        if(nums[mid]<target){
            start = mid +1;
        }
        else if(nums[mid]>target){
            end = mid - 1;
        }else{
            break;
        }       
    }
        
    cout<< target << " at Index "<< mid  << endl;

   return 0; 
}