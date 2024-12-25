//
// Created by Stefan Andonov on 25.12.24.
//


#include<iostream>
using namespace std;

bool palindrome (char * txt, int left, int right){
    if (left>=right){
        return true;
    } else {
        if (tolower(txt[left])!=tolower(txt[right])) {
            return false;
        } else {
            return palindrome(txt, left+1, right-1);
        }
    }
}

bool palindromeSentence (char * txt, int left, int right){
    if (left>=right){
        return true;
    } else {
        if (!isalpha(txt[left])){
            return palindromeSentence(txt,left+1,right);
        }

        if (!isalpha(txt[right])){
            return palindromeSentence(txt,left,right-1);
        }

        if (tolower(txt[left])!=tolower(txt[right])) {
            return false;
        } else {
            return palindromeSentence(txt, left+1, right-1);
        }
    }
}

int main (){

    char txt [100];
    cin.getline(txt,100);

    cout << palindromeSentence(txt, 0, strlen(txt)-1);
    return 0;
}