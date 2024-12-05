//
// Created by Stefan Andonov on 14.11.24.
//

#include<iostream>

using namespace std;

int getLastDigit(int number) {
    return number % 10;
}

int getFirstDigit(int number) {
    while (number >= 10) {
        number /= 10;
    }
    return number;
}

int sumOfFirstAndLastDigit(int number) {
    return getFirstDigit(number) + getLastDigit(number);
}

int reverseMiddle(int number) {
    int reverse = 0;
    number /= 10;
    while (number > 9) {
        int ld = number % 10;
        reverse = 10 * reverse + ld;
        number /= 10;
    }
    return reverse;
}


int main() {
    int a, b;
    cin >> a >> b;
    int counter = 0;

    for (int i = a; i <= b; i++) {

        int reverse = reverseMiddle(i);

        if (reverse==0){
            continue;
        }
        int sumOfDigits = sumOfFirstAndLastDigit(i);

        if (reverse % sumOfDigits== 0) {
            ++counter;
            //15474 -> (745 == (4 + 1) * 149)
            cout << i << " -> (" << reverse
                 << " == ("
                 << getLastDigit(i)
                 << " + "
                 << getFirstDigit(i)
                 << ") * "
                 << reverse / sumOfDigits
                 << ")"
                 << endl;
        }
    }
    cout << counter;
    return 0;
}