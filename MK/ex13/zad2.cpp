//
// Created by Stefan Andonov on 30.12.24.
//

#include<iostream>
using namespace std;

void print (int number){
    cout << number << " ";
    if (number<=0){
        return ;
    } else {
        print (number-5);
    }
    cout << number << " ";
}

int main () {
    int number;
    cin >> number;
    print (number);
    return 0;
}