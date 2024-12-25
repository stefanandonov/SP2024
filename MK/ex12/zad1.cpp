//
// Created by Stefan Andonov on 25.12.24.
//


#include<iostream>
#include<cstring>

using namespace std;

int main() {

    //INTRO
    char text1[101];
    char text2[101];

//    cin >> text;
//    cout << text; //zastanuva na prviot space/enter

    cin.getline(text1, 101);
    cin.getline(text2, 101);
//    cout << (strcmp(text1,text2)==0);

//    strcpy(text1,text2);

//    strncpy(text2, text1, 3);
//    text2[3]='\0';

    strcat(text1, text2);

    puts(text1);
    cout << strlen(text1) << endl;
    cout << strchr(text1, 't') << endl;
    cout << (strstr(text1, " BLABLA ") != nullptr) << endl;
    puts(text2);
    cout << strlen(text2) << endl;


    return 0;
}