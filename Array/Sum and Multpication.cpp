#include <iostream>
using namespace std;

void Sum(int arr[], int &sum) {
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
}

void Multiply(int arr[], int &product) {
    for (int i = 0; i < 5; i++) {
        product *= arr[i];
    }
    cout << "Product: " << product << endl;
}

int main() {
    
    int num[]= {1, 2, 3, 4, 5};
    int sum = 0;
    int product = 1;

    Sum(num, sum);
    Multiply(num, product);
    return 0;
}