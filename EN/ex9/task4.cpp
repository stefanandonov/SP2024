//
// Created by Stefan Andonov on 5.12.24.
//


#include<iostream>
using namespace std;

int main (){

    int m;
    int matrix[100][100];

    cin >> m;

    for (int i=0;i<m;i++){ //rows
        for (int j=0;j<m;j++){
            cin >> matrix[i][j];
        }
    }

    for (int i=0;i<m;i++){
        for (int j=i+1;j<m;j++){
            if (matrix[i][j]!=matrix[j][i]){
                cout << "ASYMMETRICAL";
                return 0;
            }
        }
    }

    cout << "SYMMETRICAL";
    return 0;
}