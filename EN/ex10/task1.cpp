//
// Created by Stefan Andonov on 12.12.24.
//

#include<iostream>
using namespace std;

long long factorialRecursive (int n){
    if (n==1){
        return 1;
    } else {
        return n * factorialRecursive(n-1);
    }
}

int sumOfFirstN (int n){
    if (n==1){
        return 1;
    } else {
        return n + sumOfFirstN(n-1);
    }
}


long long factorialIterative (int n){
    long long res = 1;
    for (int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}

long long formula (int n){
    if (n==1){
        return 1;
    } else {
        return factorialRecursive(sumOfFirstN(n)) + formula(n-1);
    }
}

int main () {

//    cout << factorialRecursive(5) << endl;
//    cout << sumOfFirstN(5);
    cout << formula(5);
    return 0;
}
