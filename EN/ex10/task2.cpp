//
// Created by Stefan Andonov on 12.12.24.
//

#include<iostream>
using namespace std;

void countDown (int n){
    if (n==0){
        cout << "Happy New Year!" << endl;
    } else {

        cout << n << endl;
        countDown(n-1);
    }
}

void countUp (int n){
    if (n==0){
        cout << "Happy New Year!" << endl;
    } else {
        countUp(n-1);
        cout << n << endl;
    }
}



int main () {
    countUp(4);
    return 0;
}
