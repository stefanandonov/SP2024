//
// Created by Stefan Andonov on 7.11.24.
//

#include<iostream>
using namespace std;

int firstHalf (int fourDigitNumber) {
    return fourDigitNumber/100;
}

int secondHalf (int fourDigitNumber){
    return fourDigitNumber%100;
}

int sumOfHalves (int fourDigitNumber){
    return firstHalf(fourDigitNumber) + secondHalf(fourDigitNumber);
}

bool condition (int fourDigitNumber){
    return fourDigitNumber% sumOfHalves(fourDigitNumber)==0;
}

int main () {

    for (int i = 1000; i < 10000; ++i) {
        if (condition(i)){
            //3417 is divisible with 34 + 17
            cout << i << " is divisible with " << firstHalf(i) << " + " << secondHalf(i)<< endl;
        }
    }
    return 0;
}