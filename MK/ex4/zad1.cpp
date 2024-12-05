//
// Created by Stefan Andonov on 24.10.24.
//

#include<iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    int sum = 0;


//    for (int i = 1; i <= N ; ++i) {
//        if (i%2==1){
//            sum+=i;
//        }
//
//    }

    for (int i = 2; i <= N ; i+=2) {
        sum+=i;

    }

//    while (N>0){
//        sum+=N; //sum = sum + N;
//        N--;
//
//    }

    cout << sum;
    return 0;
}