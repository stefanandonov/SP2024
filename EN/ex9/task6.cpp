//
// Created by Stefan Andonov on 5.12.24.
//


#include<iostream>

using namespace std;

int main() {

    int matrix[100][100];

    int m, n;

    cin >> m >> n;

    for (int i = 0; i < m; i++) { //rows
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int j=0;j<n;j++){
        int topSum = 0, bottomSum = 0;
        if (m%2==0){ //even number of elements in the j-th column
            for (int i=0;i<m/2;i++){
                topSum+=matrix[i][j];
            }
            for (int i=m/2;i<m;i++){
                bottomSum+=matrix[i][j];
            }
            int diff = abs(topSum-bottomSum);
            matrix[m/2][j]=diff;
            matrix[m/2-1][j]=diff;
        } else { //odd number of elements in the j-th column
            for (int i=0;i<=m/2;i++){
                topSum+=matrix[i][j];
            }
            for (int i=m/2;i<m;i++){
                bottomSum+=matrix[i][j];
            }
            int diff = abs(topSum-bottomSum);
            matrix[m/2][j]=diff;
        }

    }


    for (int i=0;i<m;i++){ //rows
        for (int j=0;j<n;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}