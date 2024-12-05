//
// Created by Stefan Andonov on 7.11.24.
//

#include<iostream>
using namespace std;

bool isPrime (int number){
    int counter = 0;
    for (int divisor = 2; divisor <= number/2; ++divisor) {
        if (number % divisor == 0){
            ++counter;
            break;
        }
    }
    return counter==0;
}




int main () {
    int number;
    cin >> number;

    for (int i = number+1; ; ++i) {
        if (isPrime(i)){
            cout << i << " - " << number << " = " << (i-number);

            break;
        }
    }
    return 0;
}