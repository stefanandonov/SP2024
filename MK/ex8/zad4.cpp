//
// Created by Stefan Andonov on 27.11.24.
//


#include<iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    int array[100];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int tmp = array[n-1];

    for (int i = n-1; i >= 1; i--) {
        array[i]=array[i-1];
    }

    array[0]=tmp;

    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}