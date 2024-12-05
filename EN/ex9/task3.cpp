//
// Created by Stefan Andonov on 5.12.24.
//


#include<iostream>

using namespace std;

int main() {
    int m;
    int matrix[100][100];
    cin >> m;

    int min, max;

    for (int i = 0; i < m; i++) { //rows
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];

            if (i == 0 && j == 1) {
                max = min = matrix[0][1];
            } else if(i!=j) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
        }
    }

//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < m; j++) {
//            if (i == j) {
//                matrix[i][j] = (max - min);
//            }
//        }
//    }

    for (int i=0;i<m;i++){
        matrix[i][i] = (max-min);
    }


    for (int i = 0; i < m; i++) { //rows
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}