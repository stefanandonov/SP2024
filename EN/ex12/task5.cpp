//
// Created by Stefan Andonov on 26.12.24.
//

#include<iostream>
using namespace std;

bool palindromeWord (char * str, int start, int end){
    if (start>=end){
        return true;
    } else {
        if (tolower(str[start])!=tolower(str[end])){
            return false;
        } else {
            return palindromeWord(str, start+1, end-1);
        }
    }
}

bool palindromeSentence (char * str, int start, int end){
    if (start>=end){
        return true;
    } else {
        if (!isalpha(str[start])){
            return palindromeSentence(str, start+1, end);
        }

        if (!isalpha(str[end])){
            return palindromeSentence(str, start, end-1);
        }

        if (tolower(str[start])!=tolower(str[end])){
            return false;
        } else {
            return palindromeSentence(str, start+1, end-1);
        }
    }
}

int main (){
    char text [100];
    cin.getline(text,100);

    cout << palindromeSentence(text, 0, strlen(text)-1);
    return 0;
}
