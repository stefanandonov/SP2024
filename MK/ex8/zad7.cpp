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


    for (int i=0;i<n;i++){ //go vrtime elementot za kojsto ke proveruvame dali toj ima duplikati
        for (int j=i+1;j<n;j++){ //gi vrtam elementite posle i-iot element
            if (array[i]==array[j]){
                for (int k=j;k<n-1;k++){
                    array[k]=array[k+1];
                }
                --n;
                --j;
            }
        }

    }




    for (int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    return 0;
}