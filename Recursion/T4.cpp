#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int j, int i = 0) {
    if (i >= j) {
        return 1;
    }
    if (str[i] != str[j]) {
        return 0;
    }
    return isPalindrome(str, j - 1, i + 1);
}

int main() {
    cout << "Enter a String: ";
    string str;
    cin >> str;

    cout <<"The String \"" << str << "\" is ";
    if (isPalindrome(str, str.length() - 1, 0)) {
        cout << "a palindrome." << endl;
    } else {
        cout << "not a palindrome." << endl;
    }
    return 0;
}
