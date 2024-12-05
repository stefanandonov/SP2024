//
// Created by Stefan Andonov on 17.10.24.
//


#include<iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
//    cout << c;

    if (c >= 'a' && c <= 'z') {
        cout << 1;
    }
    else if (c >= 'A' && c <= 'Z') {
        cout << 0;
    } else if (c >= '0' && c <= '9') {
        cout << "Digit";
    }
    else {
        cout << "Not a letter or digit";
    }


    return 0;
}