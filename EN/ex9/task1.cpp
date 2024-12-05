//
// Created by Stefan Andonov on 5.12.24.
//


#include<iostream>
using namespace std;

int main (){
    int matrix[100][100];

    int m,n;

//    cin >> m >> n;
//
//    for (int i=0;i<m;i++){ //rows
//        for (int j=0;j<n;j++){
//            cin >> matrix[i][j];
//        }
//    }
//
//    for (int i=0;i<m;i++){ //rows
//        for (int j=0;j<n;j++){
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }

    cin >> m;

    for (int i=0;i<m;i++){ //rows
        for (int j=0;j<m;j++){
            cin >> matrix[i][j];
        }
    }

    for (int i=0;i<m;i++){ //rows
        for (int j=0;j<m;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


}