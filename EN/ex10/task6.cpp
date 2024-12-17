//
// Created by Stefan Andonov on 12.12.24.
//

#include<iostream>
using namespace std;

int gcd (int m, int n){
    if (n==0){
        return m;
    } else {
        return gcd (n, m%n);
    }
}

int lcm (int m, int n, int divisor){
    if (m==1 && n==1){
        return 1;
    } else {
        if (m%divisor!=0 && n%divisor!=0){
            return lcm(m,n,divisor+1);
        } else {
            if (m%divisor==0){
                m/=divisor;
            }
            if (n%divisor==0){
                n/=divisor;
            }
            return divisor * lcm(m,n,divisor);
        }

    }
}

int main () {
    int n;
    cin >> n;

    int array [100];
    for (int i=0;i<n;i++){
        cin >> array[i];
    }

    int result = lcm (array[0],array[1], 2);

    for (int i=2;i<n;i++){
        result = lcm(result,array[i], 2);
    }

    cout << result;
    return 0;
}
