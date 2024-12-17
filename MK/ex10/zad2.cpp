//
// Created by Stefan Andonov on 11.12.24.
//


#include<iostream>

using namespace std;

void countUp (int n){
    if (n==0){
        cout <<"Happy new year!!!!" << endl;
    } else {

        countUp(n - 1);
        cout << n << endl;
    }
}

void countDown (int n){
    if (n==0){
        cout <<"Happy new year!!!!" << endl;
    } else {
        cout << n << endl;
        countDown(n - 1);

    }
}

int main () {
    countUp(10);
    return 0;
}