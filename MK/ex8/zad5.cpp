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

    for (int i = n - k; i < n; i++) {
        tmp[i-(n-k)]=array[i];
    }

    for (int i=n-1;i>=k;i--){
        array[i]=array[i-k];
    }

    for (int i=0;i<k;i++){
        array[i]=tmp[i];
    }

    for (int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    return 0;
}