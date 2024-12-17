//
// Created by Stefan Andonov on 12.12.24.
//

#include<iostream>
using namespace std;

int sumOfDigits (int n){
    if (n==0){
        return 0;
    } else {
        return n%10 + sumOfDigits(n/10);
    }
}

void printDigits (int n){
    if (n==0){
        return;
    } else {
        cout << n%10 << endl;
        printDigits(n/10);
    }
}

void printDigitsFromLeft (int n){
    if (n==0){
        return;
    } else {
        printDigitsFromLeft(n/10);
        cout << n%10 << endl;
    }
}



int main () {
//    cout << sumOfDigits(1234) << endl;
//    printDigitsFromLeft(1234);

    return 0;
}
