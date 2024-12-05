//
// Created by Stefan Andonov on 7.11.24.
//

#include<iostream>

using namespace std;

int sumOfDivisor(int number) {
    int sum = 0;
    for (int divisor = 1; divisor <= number / 2; ++divisor) {
        if (number % divisor == 0) {
            sum += divisor;

        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int maxSumOfDivisors = 0;
    int maxNumber = 0;
    for (int i = n - 1; i > 0; --i) {
        //cout << i << "->" << sumOfDivisor(i) << endl;
        if (sumOfDivisor(i) > maxSumOfDivisors){
            maxSumOfDivisors = sumOfDivisor(i);
            maxNumber = i;
        }
    }
    cout << maxNumber;
    return 0;
}