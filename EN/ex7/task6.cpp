//
// Created by Stefan Andonov on 14.11.24.
//

#include<iostream>
#include<cmath>
using namespace std;

int max3 (int a,int b, int c){

    return max(a,max(b,c));

//    max()
//    if (a>=b && a>=c){
//        return a;
//    }
//    else if (b>=a && b>=c){
//        return b;
//    } else {
//        return c;
//    }
}

int min3 (int a,int b, int c) {
    return min(a,min(b,c));
}

double expression3 (int a, int b, int c){
    return 2*min3(a,b,c) - max3(a,b,c)/2.0 + fabs(min3(a,b,c)-a);
}


int main () {

    int N;
    cin >> N;

    for (int i=0;i<N;i++){
        int a,b,c;
        cin >> a >> b >> c;
        cout << expression3(a,b,c) << endl;
    }

    return 0;
}