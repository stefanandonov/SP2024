//
// Created by Stefan Andonov on 14.11.24.
//

#include<iostream>
using namespace std;

int main () {

    for (int i = 9999; i>= 1000; i--) {
        if (i % 149 == 0){
            cout << i << endl;
        }


    }

//    January 2023 exam qualifying task
//    int n = 17;
//
//    for (int i = 1; i <= n; i++) {
//        int number;
//        cin >> number;
//        if (i%2==0){
//            cout << number << " ";
//        }
//    }
    return 0;
}