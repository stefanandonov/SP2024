//
// Created by Stefan Andonov on 30.10.24.
//

#include<iostream>
using namespace std;

int main () {
    char op;
    float number;
    float result = 0;

    while (true){
        cin >> op;
        if (op=='X'){
            cout << "Result: " << result;
            return 0;
        }
        cin >> number;
        switch (op) {
            case '+':
                result+=number; break;
            case '-':
                result-=number; break;
            case '*':
                result*=number; break;
            case '/':
                result/=number; break;

            default:
                cout << "Invalid operator "<<op << endl;

        }
    }

    return 0;
}