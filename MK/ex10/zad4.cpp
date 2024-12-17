//
// Created by Stefan Andonov on 11.12.24.
//


#include<iostream>

using namespace std;

int count8 (int number){
    if (number==0){
        return 0;
    } else {
        int ld = number%10;
        int sld = number/10%10;
        if (ld!=8){
            return 0 + count8(number/10);
        } else { //ld==8
            if (sld==8){
                return 2 + count8(number/10);
            } else {
                return 1 + count8(number/10);
            }
        }
    }
}

int main () {
    cout << count8(128818);
    return 0;
}