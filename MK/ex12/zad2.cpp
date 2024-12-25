//
// Created by Stefan Andonov on 25.12.24.
//


#include<iostream>
using namespace std;

int count (char *txt, char search){
    int counter = 0;
    while (*txt!='\0'){
        if (*txt==search){
            ++counter;
        }
        txt++;
    }
    return counter;
}

int countR (char *txt, char search){
    if (*txt=='\0'){
        return 0;
    } else {
        if (*txt==search){
            return 1+ countR(txt+1, search);
        } else {
            return 0 + countR(txt+1, search);
        }
    }
}

int strlenR (char *txt){
    if (*txt=='\0'){
        return 0;
    } else {
        return 1+strlenR(txt+1);
    }
}

int countF (char * txt, int search){
    int counter = 0;
    for (int i = 0; i < strlen(txt); ++i) {
        if (txt[i]==search){
            ++counter;
        }
    }
    return counter;
}

int main (){

    char text [101];
    char c;
    cin.getline(text,101);
    cin >> c;

    cout << text << endl << c << endl;
    cout << countF(text, c);
    return 0;
}