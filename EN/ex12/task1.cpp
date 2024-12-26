//
// Created by Stefan Andonov on 26.12.24.
//

#include<iostream>
#include<cstring>
using namespace std;

int main (){
    //INTRO

    char text[101];
    char text2[101];

//    cin >> text; //until the first space/newline
    cin.getline(text, 100);
    cin.getline(text2, 100);

    cout << "BEFORE STRCPY" << endl;
    cout << text << endl;
    cout << strlen(text) << endl;
    cout << text2 << endl;
    cout << strlen(text2) << endl;

//    cout << "AFTER STRNCPY" << endl;

//    strncpy(text,text2, 3); //everything from text2 will be copied into text
//    text[3]='\0';
//    cout << text << endl;
//    cout << strlen(text) << endl;
//    cout << text2 << endl;
//    cout << strlen(text2) << endl;

//    cout << "STRCAT" << endl;
//    strcat (text, text2); //will concatenate text2 at the end of text
//    cout << text << endl << text2;

    cout << strcmp(text, text2) << endl;

    cout << strchr(text, 'n') << endl;

    cout << (strstr(text, text2)==nullptr) << endl;
//    NO GOD NO PLEASE NO
//    if (text==text2){
//
//    }




    return 0;
}
