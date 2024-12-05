//
// Created by Stefan Andonov on 14.11.24.
//

#include<iostream>
using namespace std;

bool cikcak (int number) {
    int ld = number%10;
    int sld = number/10%10;

    bool larger;
    if (ld > sld) {
        larger = true;
    } else if (ld<sld){
        larger = false;
    } else {
        return false;
    }

    larger = !larger;
    number/=10;

    while(number>=10){
        int ld = number%10;
        int sld = number/10%10;

        if (larger){
            if (ld<=sld){
                return false;
            }
        } else {
            if (ld>=sld){
                return false;
            }
        }

        larger = !larger;


        number/=10;
    }
    return true;
}

int main () {

    int number;

    while (cin >> number){
        if (number<10){
            continue;
        }
        if (cikcak(number)){
            cout << number << endl;
        }
    }
    return 0;
}