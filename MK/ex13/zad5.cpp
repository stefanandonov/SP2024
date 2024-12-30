//
// Created by Stefan Andonov on 30.12.24.
//

#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

char find (char * str) {
    if (*str == '\0'){
        return *str;
    }
    if (isalpha(*str) && isupper(*str)){
        return *str;
    }

    return find (str+1);
}

int main () {
    char text [100];
    cin.getline(text,100);
    char result = find (text);
    if (result=='\0'){
        cout << "Nema";
    } else {
        cout << result;
    }
    return 0;
}