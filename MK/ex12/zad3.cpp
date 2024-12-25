//
// Created by Stefan Andonov on 25.12.24.
//


#include<iostream>
using namespace std;

int main (){

    char txt [100];
    cin.getline(txt,100);

    int start,length;
    cin >> start >> length;

//    cout << txt << endl << start << endl << length;
//    cout << (txt+start);

    char result[100];
    strncpy(result, txt+start, length);
    cout << result;
    return 0;
}