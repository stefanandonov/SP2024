//
// Created by Stefan Andonov on 30.12.24.
//

#include<iostream>

using namespace std;

int main() {

    int matrix[100][100];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int z;
    cin >> z;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i < m - (z - 1) && j < n - (z - 1)) {
                int sum = 0;

                //suma po i-tata redica
                for (int k = 0; k < z-1; k++) {
                    sum += matrix[i][j + k];
                }

                //suma po dijagonala
                int maxJ = j + z - 1;
                for (int k = 0, ii = i, jj = maxJ; k < z; k++, ii++, jj--) {
                    sum+= matrix[ii][jj];
                }

                //suma po i+z-1
                for (int k = 1; k < z; k++) {
                    sum += matrix[i + z - 1][j + k];
                }

                cout << sum << endl;
            } else {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}