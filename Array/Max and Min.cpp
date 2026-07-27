#include <iostream>
using namespace std;

int main(){

    int num [] = {1, 2, 3, 4, 5};
    int max = num[0];
    int min = num[0];

    for (int i = 1; i < 5; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}
