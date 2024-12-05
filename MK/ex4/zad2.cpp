//
// Created by Stefan Andonov on 24.10.24.
//

#include<iostream>

using namespace std;

int main() {
    int n;
    float x;
    cin >> x >> n;
    int temp = n;

    float product = 1.0;

//    while (temp > 0) {
//        product *= x;
//        temp--;
//    }

    for (int i = 1; i <= n; ++i) {
        product *= x;
    }

    cout << x << "^" << n << " = " << product;
    return 0;
}