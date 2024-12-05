//
// Created by Stefan Andonov on 14.11.24.
//

#include<iostream>
using namespace std;

long sumEdge (long number) {
    int ld = number%10;
    int sld = number/10%10;
    int sumOfLastTwo = ld + sld;
    number/=100;

    if (sumOfLastTwo>=10){
        number*=100;
    } else {
        number*=10;
    }

    number+=sumOfLastTwo;
    return number;
}

void reduce (long number) {
    while (number>=10){
        number = sumEdge(number);
        cout << number << endl;
    }
}

int main () {

    long number;
    while (cin >> number){
        reduce(number);
    }
    return 0;
}