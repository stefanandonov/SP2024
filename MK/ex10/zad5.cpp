//
// Created by Stefan Andonov on 11.12.24.
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
        return ;
    } else {

        printDigits(n/10);
        cout << n%10 << endl;
    }
}

int main () {

//    cout << sumOfDigits(12345);
    printDigits(12345);
    return 0;
}