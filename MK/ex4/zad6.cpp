//
// Created by Stefan Andonov on 24.10.24.
//

#include<iostream>

using namespace std;

int main() {

    int n;
    int sum = 0;

    cin >> n;

    int counter = n/2;

    if (n % 2 == 1) {
        n--;
    }

    while (n>0){
        //6*6=36
        cout << n << "*" << n << "=" << n*n << endl;
        sum += (n*n);

        n-=2;
    }

    cout << sum << endl;
    cout << 1.0 * sum / counter << endl;
    return 0;
}