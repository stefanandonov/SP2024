//
// Created by Stefan Andonov on 17.10.24.
//
#include<iostream>

using namespace std;

int main() {
    int points;
    cin >> points;

//    if (points < 50){
//        cout << 5;
//    }
//    if (points>=50 && points<60){
//        cout << 6;
//    }
//    if (points>=60 && points<70){
//        cout << 7;
//    }
//    if (points>=70 && points<80){
//        cout << 8;
//    }
//    if (points>=80 && points<90){
//        cout << 9;
//    }
//    if (points >= 90){
//        cout << 10;
//    }

//    if (points < 50) {
//        cout << 5;
//    } else if (points < 60) {
//        cout << 6;
//    } else if (points < 70) {
//        cout << 7;
//    } else if (points < 80) {
//        cout << 8;
//    } else if (points < 90) {
//        cout << 9;
//    } else {
//        cout << 10;
//    }

    int firstDigit = points/10;
    int lastDigit = points%10;
    char sign = ' ';
    if (lastDigit>=0 && lastDigit<=2){
        sign='-';
    }
    if (lastDigit>=7 && lastDigit<=9){
        sign='+';
    }

    int grade = firstDigit+1;
    if (grade > 10){
        grade = 10;
    }
    if (grade < 5){
        grade = 5;
    }

    if (grade==5){
        sign = ' ';
    }

    if (grade==10 && sign=='+'){
        sign = ' ';
    }

    if (points>=100){
        sign = ' ';
    }

    cout << grade << sign;
    return 0;
}