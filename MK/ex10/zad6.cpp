//
// Created by Stefan Andonov on 11.12.24.
//


#include<iostream>

using namespace std;


int gcd (int m, int n){
    if (n==0){
        return m;
    } else {
        return gcd (n, m%n);
    }
}

int main () {
//    cout << gcd (36,120);
    int n;
    cin >> n;

    int array[100];
    for (int i=0;i<n;i++){
        cin >> array[i];
    }

    int result = gcd(array[0],array[1]);

    for (int i=2;i<n;i++){
        result = gcd(result, array[i]);
    }
    cout << result;
    return 0;
}