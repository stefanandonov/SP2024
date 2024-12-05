//
// Created by Stefan Andonov on 30.10.24.
//
//
// Created by Stefan Andonov on 30.10.24.
//

#include<iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for (int i=0;i<n;i++){
        int number;
        cin >> number;

        int tmp = number;
        bool isGood = true;

        while (tmp>9){
            int ld = tmp%10;
            int sld = tmp/10%10;
            if (ld >= sld){
                isGood=false;
                break;
            }
            tmp/=10;
        }

        if (isGood){
            cout << number << endl;
        }
    }
    return 0;
}