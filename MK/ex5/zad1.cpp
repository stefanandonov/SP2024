//
// Created by Stefan Andonov on 30.10.24.
//

#include<iostream>
using namespace std;

int main () {
    int number;
    cin >> number;

    int temp = number;

    int sum = 0;
    int counter = 0;

    while (temp>0){
        int lastDigit = temp%10;
        int secondToLastDigit = temp/10%10;
        if (lastDigit>secondToLastDigit){
            cout << lastDigit << " ";
        }

        temp/=10;
    }


    return 0;
}