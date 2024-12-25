//
// Created by Stefan Andonov on 25.12.24.
//


#include<iostream>
using namespace std;

int main (){
    char text [100];

    cin.getline(text, 100);

    for (int i=0;i<strlen(text);i++){
        if (isalpha(text[i])) {
            if (islower(text[i])){
                text[i]=toupper(text[i]);
            } else {
                text[i]=tolower(text[i]);
            }
        } else {
            for (int j=i;j<strlen(text);j++){
                text[j]=text[j+1];
            }
            i--;
        }

    }

    puts(text);
    return 0;
}