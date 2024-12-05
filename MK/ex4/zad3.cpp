//
// Created by Stefan Andonov on 24.10.24.
//

#include<iostream>
using namespace std;

int main () {

    for (int i = 1000; i <= 9999; ++i) {
        int d4 = i % 10;
        int d3 = i /10%10;
        int d2 = i /100%10;
        int d1 = i / 1000;
        if (d1 == (d2+d3+d4)){
            cout << i << endl;
        }
    }
    return 0;
}