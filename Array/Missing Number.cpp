//LC 268 Easy
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {0,1,2,3,4,5,6,7,9,10};
    int n = nums.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    int A_Sum = n * (n + 1) / 2;
    int Number = A_Sum - sum;
    cout << "The missing number is: " << Number << endl;
    return Number;
}