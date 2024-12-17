//
// Created by Stefan Andonov on 12.12.24.
//

#include<iostream>
using namespace std;

int sumOfArray (int array[], int n){

    if (n==0){
        return 0;
    } else {
        return array[n-1] + sumOfArray(array, n-1);
    }
}

int main () {
    int n;
    cin >> n;

    int array [100];
    for (int i=0;i<n;i++){
        cin >> array[i];
    }

    cout << sumOfArray(array, n);


    return 0;
}
