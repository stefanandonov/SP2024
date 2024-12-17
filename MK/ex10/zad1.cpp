//
// Created by Stefan Andonov on 11.12.24.
//


#include<iostream>

using namespace std;

long long factorial (long number){
    if (number==1){
        return 1;
    } else {
        return number * factorial(number-1);
    }
}

int sum (int number) {
    if (number==1){
        return 1;
    } else {
        return number + sum (number-1);
    }
}

long long formula (int number) {
    if (number==1){
        return 1;
    } else {
        return factorial(sum(number)) + formula(number-1);
    }
}

int main () {
    cout << formula(4);
    return 0;
}