#include <iostream>
using namespace std;

int main(){
    int nums[]={1,2,3,4,5,6,7,8,9,10,345,2456,32466,267217,3457637,367830234};
    int n = size(nums);
    cout << "Enter Target:";
    int target; cin >> target;
int start=0;
int end = n-1;
int mid;
    while(start <= end){
        mid = (start+end)/2;

        if(nums[mid]<target){
            start = mid +1;
        }
        else if(nums[mid]>target){
            end = mid - 1;
        }else{
            if(nums[mid]== target){
                return mid;
            }
        }       
    }
    return -1;   // Target Not found
}