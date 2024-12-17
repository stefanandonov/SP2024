//
// Created by Stefan Andonov on 11.12.24.
//


#include<iostream>

using namespace std;

int lcd(int a, int b, int divisor) {
    if (a == 1 && b == 1) {
        return 1;
    } else {
        if (a % divisor != 0 && b % divisor != 0) {
            return lcd(a, b, divisor + 1);
        }

        if (a % divisor == 0) {
            a /= divisor;
        }
        if (b % divisor == 0) {
            b /= divisor;
        }
        return divisor * lcd(a, b, divisor);
    }
}

int main() {
    int n;
    cin >> n;

    int array[100];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int result = lcd(array[0], array[1], 2);

    for (int i = 2; i < n; i++) {
        result = lcd(result, array[i], 2);
    }

    cout << result;

    return 0;
}