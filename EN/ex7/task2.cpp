
//
// Created by Stefan Andonov on 14.11.24.
//

#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    double sum = 0;
    int counter = 0;

    for (int i = n; i >= 2; i--) {
        if (i % 2 == 0) {
            //6*6=36
            cout << i << "*" << i << "=" << pow(i, 2) << endl;
            sum += pow(i, 2);
            ++counter;
        }
    }
    cout << sum << endl;
    cout << sum / counter;

    return 0;
}