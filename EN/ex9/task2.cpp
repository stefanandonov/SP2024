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

    int sumEvenRows = 0, sumOddColumns = 0;

    for (int i = 0; i < m; i++) { //rows
        for (int j = 0; j < n; j++) {
            if (i%2==0){ //in an even row
                sumEvenRows+=matrix[i][j];
            }
            if (j%2==1){
                sumOddColumns+=matrix[i][j];
            }
        }
    }

    cout << abs(sumEvenRows - sumOddColumns) << endl;
    return 0;
}