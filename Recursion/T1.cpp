#include <iostream>
#include <vector> // Changed from <array> to <vector>
using namespace std;

int Sun(const vector<int>& arr, int index = 0) {
    if (index >= arr.size()) {
        return 0; // Base case: if index is out of bounds, return 0
    }
    return arr[index] + Sun(arr, index + 1); // Recursive case
}

int Occur(const vector<int>& arr, int target, int index = 0) {
    if (index >= arr.size()) {
        return 0; // Base case: if index is out of bounds, return 0
    }
    return (arr[index] == target) + Occur(arr, target, index + 1); // Recursive case
}

int main() {
    cout << "Enter the Size of Array: ";
    int size;  
    cin >> size;

    vector<int> num(size); // Creates a dynamic array of the user's chosen size

    for (int i = 0; i < size; i++) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> num[i];
    }

    cout << "Array Elements: ";
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    cout << "Sum of Array Elements: " << Sun(num) << endl;
    cout << "Enter the Element to Count Occurrences: ";
    int target;cin >> target;
    cout << "Occurrences of " << target << ": " << Occur(num, target)
    << endl;
    return 0;
}
