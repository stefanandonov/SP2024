//
// Created by Stefan Andonov on 7.11.24.
//

#include<iostream>
using namespace std;

int reverse (int number){
    int result = 0;

    while (number>0){
        int ld = number%10;
        result = 10*result+ld;
        number/=10;
    }

    return result;
}

bool isPalindrome (int number){
    return number == reverse(number);
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

bool isDivisibleBySumOfDigits (int number) {
    return number % sumOfDigit(number) == 0;
}

int main () {

    int X;
    cin >> X;

    int counter = 0;

    for (int i = X-1; i > 0; i--) {
        if (isPalindrome(i) && isDivisibleBySumOfDigits(i)){
            cout << i << endl;
            ++counter;
        }

        if (counter==10){
            break;
        }
    }

    return 0;
}