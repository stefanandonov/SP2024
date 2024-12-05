//
// Created by Stefan Andonov on 24.10.24.
//

#include<iostream>
using namespace std;

int main () {

    for (int i=9999;i>1000;i--){
        if (i%149==0){
            cout << i << endl;
        }
    }
    return 0;
}