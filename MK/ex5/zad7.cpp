//
// Created by Stefan Andonov on 30.10.24.
//

#include<iostream>
using namespace std;

int main () {

    int number;
    cin >> number;

    int tmp = number;

    while (tmp>9){
        int ld = tmp%10;
        int sld = tmp/10%10;
        if (ld >= sld){
            cout << "NE";
            return 0;
        }

        tmp/=10;
    }

    cout << "YES";
    return 0;
}