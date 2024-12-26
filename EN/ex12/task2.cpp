//
// Created by Stefan Andonov on 26.12.24.
//

#include<iostream>

using namespace std;

int occurs(char *str, char c) {
    int counter = 0;
    while (*str != '\0') {
        if (*str == c) {
            ++counter;
        }
        str++;
    }
    return counter;
}

int occursF(char *str, char c) {
    int counter = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            ++counter;
        }
    }
    return counter;
}

int occursR(char *str, char c) {
    if (*str == '\0') {
        return 0;
    } else {
        if (*str == c) {
            return 1 + occursR(str + 1, c);
        } else {
            return occursR(str + 1, c);
        }
    }
}

int main() {
    char text [100];
    char c;

    cin.getline(text,100);
    cin >> c;

//    cout << text << endl << c;

    cout << occurs(text,c);
    return 0;
}
