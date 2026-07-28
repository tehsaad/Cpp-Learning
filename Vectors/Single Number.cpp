// LC 136. Single Number Easy
// O(n^2) Time Complexity, Requires O(n) Space Complexity

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {2,1,2};
    int n = nums.size();
    int reps[n];

    for(int i = 0; i < n; i++){       //Array Initialization
        reps[i] = 0;
    }

    for( int e : nums){              //Linear Search
        for(int i = 0; i < n; i++){
            if(e == nums[i]){
                reps[i]++;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        if(reps[i] == 1){
            cout << nums[i] << endl;
            return nums[i];
        }
    }
    return 0;
}