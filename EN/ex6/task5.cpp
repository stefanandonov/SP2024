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

int sumOfDigit (int number) {
    int sum = 0;

    while (number>0){
        int ld = number%10;
        sum+=ld;
        number/=10;
    }
//    for (int i = number; i > 0; i/=10) {
//        sum+=i%10;
//    }
    return sum;
}

int main () {
    int counter = 0;
    for (int i = 9999; i > 1 ; --i) {
        if (isPrime(i) && isPrime(sumOfDigit(i))){
            cout << i << endl;
            ++counter;
        }
    }
    cout << counter;
    return 0;
}