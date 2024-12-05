//
// Created by Stefan Andonov on 30.10.24.
//

#include<iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int tmp = i;
        int rev = 0;

        while (tmp>0){
            int ld = tmp%10;
            rev = 10*rev + ld;
            tmp/=10;
        }

        if (i == rev) {
            cout << i << endl;
        }
    }
    return 0;
}