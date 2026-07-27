#include <iostream>
using namespace std;

int main(){

    int num[5] = {5, 2, 9, 1, 5};
    int n = sizeof(num) / sizeof(num[0]);

    // Simple bubble sort
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    return 0;
}