//
// Created by Stefan Andonov on 5.12.24.
//


#include<iostream>

using namespace std;

int main() {

    int matrix[100][100];
    int bombs[100][100];

    int m, n;

    cin >> m >> n;

    for (int i = 0; i < m; i++) { //rows
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            bombs[i][j] = 0;
        }
    }

    int counter = 0;

    for (int i = 1; i < m - 1; i++) { //0 and last row can't form a cross
        for (int j = 1; j < n - 1; j++) { //0 and last column can't form a cross
            if (matrix[i][j] == 1 && matrix[i - 1][j] == 1 && matrix[i + 1][j] == 1 && matrix[i][j - 1] == 1 &&
                matrix[i][j + 1] == 1) {
                //possible cross
                if (bombs[i][j] == 0 && bombs[i - 1][j] == 0 && bombs[i + 1][j] == 0 && bombs[i][j - 1] == 0 &&
                    bombs[i][j + 1] == 0) {
                    ++counter;
                    bombs[i][j] = bombs[i - 1][j] = bombs[i + 1][j] = bombs[i][j - 1] = bombs[i][j + 1] = 1;
                }
            }
        }
    }

    cout << counter;


    return 0;
}