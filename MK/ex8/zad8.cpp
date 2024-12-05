//
// Created by Stefan Andonov on 27.11.24.
//


#include<iostream>

using namespace std;

int main() {

    int digit;

    int counter [10] = {0};

    while (cin>>digit){
        counter[digit]++;
    }

    for (int i=0;i<10;i++){
        cout << i << " -> " << counter[i] << endl;
    }
    return 0;
}