//
// Created by Stefan Andonov on 26.12.24.
//

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void toLowerCase (char * str){
    for (int i=0;i<strlen(str);i++){
        str[i] = tolower(str[i]);
    }
}

bool substr (char * large, char * small){
    toLowerCase(large);
    toLowerCase(small);
    return strstr(large, small)!= nullptr;
}

int occurs (char * large, char * small){
    toLowerCase(large);
    toLowerCase(small);
    char * result = strstr(large, small);
    if (result == nullptr){
        return 0;
    } else {
        return 1 + occurs(result+1,small);
    }
}

int main (){
    char large [200];
    char small [100];

    cin.getline(large,200);
    cin.getline(small, 100);

    cout << substr(large, small) << endl;
    cout << occurs(large, small) << endl;




    return 0;
}
