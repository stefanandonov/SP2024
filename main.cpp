#include <iostream>

using namespace std;

bool vnesen(long long brojvnesen) {
    long broj = brojvnesen;
    int kolkubukvi = 0;
    while (broj != 0) {
        int cifriPosledni2 = broj % 100;

        if (cifriPosledni2 < 65 || cifriPosledni2 > 90) {
            break;
        }
        kolkubukvi++;

        broj = broj / 100;
    }

    return kolkubukvi >= 3 && broj == 0;
}

char najgolemaBukva(long long brojvnesen) {
    long broj = brojvnesen;
    int maxcifra = 0;
    while (broj != 0) {
        int posledni2cifri = broj % 100;
        broj = broj / 100;
        if (posledni2cifri > maxcifra) {
            maxcifra = posledni2cifri;
        }
    }

    char maxBukva = (maxcifra - 65) + 'A';
    return maxBukva;

}

int main() {
    int n;
    long long brojvnesen;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> brojvnesen;
        if (vnesen(brojvnesen)) {
            cout << brojvnesen << " - " << "YES" << " - " << najgolemaBukva(brojvnesen) << endl;
        } else {
            cout << brojvnesen << " - " << "NO" << endl;
        }
    }
    return 0;
}