//
// Created by Stefan Andonov on 30.10.24.
//

#include<iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    for (int i = a+1; ; i++) {
        int tmp = i;
        int rev = 0;

        while (tmp>0){
            int ld = tmp%10;
            rev = 10*rev + ld;
            tmp/=10;
        }

        if (i == rev) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}