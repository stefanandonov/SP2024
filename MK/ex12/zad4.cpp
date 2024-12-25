//
// Created by Stefan Andonov on 25.12.24.
//


#include<iostream>
#include<cctype>
using namespace std;

void toLowerCase (char * str){
    for (int i=0;i<strlen(str);i++){
        str[i] = (char)tolower(str[i]);
    }
}

int main (){

    char small[100];
    char large[200];

    cin.getline(small,100);
    cin.getline(large,100);

    toLowerCase(small);
    toLowerCase(large);

    if (strlen(small)>strlen(large)){
        cout << "NO";
        return 0;
    }

    if (strstr(large,small)!= nullptr){
        cout << "YES";
    } else {
        cout << "NO";
    }

//    for (int i=0;i<=strlen(large)-strlen(small);i++){
//        if (tolower(large[i])==tolower(small[0])){
//            int counter = 0;
//            for (int j=0;j<strlen(small);j++){
//                if (tolower(small[j])==tolower(large[j+i])){
//                    ++counter;
//                }
//            }
//            if (counter == strlen(small)){
//                cout << "YES";
//                return 0;
//            }
//        }
//    }
//
//    cout << "NO";
    return 0;
}