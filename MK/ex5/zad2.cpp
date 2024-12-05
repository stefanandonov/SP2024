//
// Created by Stefan Andonov on 30.10.24.
//

#include<iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    int tmp = number;
    int rev = 0;

    while (tmp > 0) {
        int ld = tmp % 10;
        rev = 10 * rev + ld;
        tmp /= 10;
    }

    cout << number << " --> " << rev << endl;

    if (number==rev){
        cout << "This number is also a palindrome";
    } else {
        cout << "This number is not a palindrome";
    }
    return 0;
}