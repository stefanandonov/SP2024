//
// Created by Stefan Andonov on 30.10.24.
//

#include<iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;
    int sum = 0;
    int counter = 0;

    for (int i = b; i >= a; i--) {
        //i ni e sekoe brojce od a do b

        if (counter==10){
            break;
        }

        int tmp = i;
        sum = 0;

        while (tmp > 9) {
            int ld = tmp % 10;
            sum += ld;
            tmp /= 10;
        }

        int firstDigit = tmp;

        if (firstDigit == sum) {
            cout << i << endl;
            ++counter;
        }

    }

    cout << counter;



//    int number;
//    cin >> number;
//
//    int tmp = number;
//
//    int sum = 0;
//
//    while (tmp>9){
//        int ld = tmp%10;
//        sum += ld;
//        tmp/=10;
//    }
//
//    cout << number << " " << tmp << " " << sum;

    return 0;
}