//
// Created by Stefan Andonov on 27.11.24.
//


#include<iostream>
using namespace std;

int main () {
    int array1[100], array2[100];
    int n1,n2;

    cin >> n1;
    for (int i=0;i<n1;i++){
        cin >> array1[i];
    }

    cin >> n2;
    for (int i=0;i<n2;i++){
        cin >> array2[i];
    }

    if (n1!=n2){
        cout << "!=" << endl;
        return 0;
    }

//    int counter = 0;
//    for (int i=0;i<n1;i++){
//        if (array1[i]==array2[i]){
//            ++counter;
//        }
//    }
//
//    if (counter==n1){
//        cout << "==" << endl;
//    } else {
//        cout << "!=" << endl;
//    }

    bool isEqual = true;
    for (int i=0;i<n1;i++){
        if (array1[i]!=array2[i]){
            isEqual = false;
            break;
        }
    }


    if (isEqual){
        cout << "==";
    } else {
        cout << "!=";
    }


    return 0;
}