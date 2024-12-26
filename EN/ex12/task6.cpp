//
// Created by Stefan Andonov on 26.12.24.
//

#include<iostream>
using namespace std;

int main (){
    char text [100];
    cin.getline(text,100);

    int j=0;
    for (int i=0;i<strlen(text);i++){
        if (isalpha(text[i])){
            if (islower(text[i])){
                text[j]=toupper(text[i]);
            } else {
                text[j]=tolower(text[i]);
            }
            ++j;
        }
    }
    text[j]='\0';

    cout << text;
    return 0;
}
