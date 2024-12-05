//
// Created by Stefan Andonov on 27.11.24.
//


#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int array[100];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int k;
    cin >> k;

    int tmp[100];


    for (int i=0;i<n;i++){
        tmp[(i+k)%n] = array[i];
    }

    for (int i=0;i<n;i++){
        array[i] = tmp[i];
    }

    for (int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    return 0;
}