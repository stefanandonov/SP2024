//
// Created by Stefan Andonov on 24.10.24.
//

#include<iostream>
using namespace std;

int main () {
    int number;
    int max;

    bool first = true;

    while (cin >> number) {

        if (first){
            max = number;
            first = false;
        }
//        cout << number;
        if (number > max) {
            max = number;
        }
    }

    cout << max;
    return 0;
}