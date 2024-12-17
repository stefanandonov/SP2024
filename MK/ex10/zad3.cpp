//
// Created by Stefan Andonov on 11.12.24.
//


#include<iostream>

using namespace std;

bool isPrime(int n, int possibleDivisor) {
    if (possibleDivisor == 1) {
        return true;
    }
    if (n % possibleDivisor == 0) {
        return false;
    }

    return isPrime(n, possibleDivisor-1);
}

int nextPrime (int n){
    if (isPrime(n,n/2)){
        return n;
    } else {
        return nextPrime(n+1);
    }
}

int main() {

    int x;
    cin >> x;

    //577 - 573 = 4

    int firstPrimeNumber = nextPrime(x+1);

    cout << firstPrimeNumber << " - " << x << " = " << firstPrimeNumber-x;
    return 0;
}