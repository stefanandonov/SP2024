//
// Created by Stefan Andonov on 27.11.24.
//


#include<iostream>

using namespace std;

int main() {
    int n;
    int array[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    bool asc = true;
    bool desc = true;

    for (int i = 1; i < n; i++) {
        if (array[i] <= array[i - 1]) {
            asc = false;
        }
        if (array[i] >= array[i - 1]) {
            desc = false;
        }

        if (!asc && !desc){
            break;
        }
    }

    if (asc) {
        cout << "ASC" << endl;
    } else if (desc) {
        cout << "DESC" << endl;
    } else {
        cout << "Neither" << endl;
    }
    return 0;
}