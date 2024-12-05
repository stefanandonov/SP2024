//
// Created by Stefan Andonov on 27.11.24.
//


#include<iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    double min = 1000000;
    double max = -1000000;

    double array [100];

    for (int i=0;i<n;i++){
        cin >> array[i];
        if (array[i]<min){
            min=array[i];
        }
        if (array[i]>max){
            max = array[i];
        }
    }

    for (int i=0;i<n;i++){
        array[i]=(array[i]-min)/(max-min);
    }

    cout <<max << " "<< min << endl;

    for (int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    return 0;
}