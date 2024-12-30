//
// Created by Stefan Andonov on 30.12.24.
//

#include<iostream>
#include<cstring>

using namespace std;


int occursR(char *big, char *small) {
    char * result = strstr(big, small);
    if (result == nullptr) {
        return 0;
    } else {
        return 1 + occursR(result+1, small);
    }
}


int occurs(char *big, char *small) {
    int counter = 0;
    for (int i = 0; big[i] != '\0'; i++) {
        if (strncmp(small, big + i, strlen(small)) == 0) {
            ++counter;
        }
    }
    return counter;
}

int main() {
    char start[20];
    cin.getline(start, 20);
    int n;
    cin >> n;
    cin.ignore();

    int counter[100] = {0};
    int maxResult = 0;

    for (int i = 0; i < n; i++) {
        char line[100];
        cin.getline(line, 100);
//        cout << start << "->" << line << endl;
        int result = occursR(line, start);

        counter[result]++;
        if (result > maxResult) {
            maxResult = result;
        }
    }

    for (int i = 0; i <= maxResult; i++) {
        cout << i << ": " << counter[i] << endl;
    }
    return 0;
}