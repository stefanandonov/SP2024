
//
// Created by Stefan Andonov on 17.10.24.
//


#include<iostream>
using namespace std;

int main () {
    int year;
    cin >> year;

    if ((year%4==0 && year%100!=0) || year%400==0){
        cout << "Leap year";
    } else {
        cout << "Regular year";
    }
    return 0;
}