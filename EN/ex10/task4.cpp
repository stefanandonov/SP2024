//
// Created by Stefan Andonov on 12.12.24.
//

#include<iostream>
using namespace std;

bool isPrime (int number, int possibleDivisor) {
    if (possibleDivisor==1){
        return true;
    }
    if (number%possibleDivisor==0){
        return false;
    }
    return isPrime(number, possibleDivisor-1);
}


int firstPrimeAfter (int n){
    if (isPrime(n, n/2)){
        return n;
    } else {
        return firstPrimeAfter(n+1);
    }
}

int main () {
    int n;
    cin >> n;
//    cout << isPrime(n,n/2)<< endl;

    int result = firstPrimeAfter(n+1);

    cout << result << " - " << n << " = " << result-n;
    return 0;
}
