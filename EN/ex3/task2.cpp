//
// Created by Stefan Andonov on 17.10.24.
//
#include<iostream>

using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

//    if (x > 0 && y > 0) {
//        cout << "1";
//    } else if (x < 0 && y > 0) {
//        cout << "2";
//    } else if (x < 0 && y < 0) {
//        cout << "3";
//    } else if (x > 0 && y < 0) {
//        cout << "4";
//    } else if (x == 0 && y == 0) {
//        cout << "origin";
//    } else if (y == 0 && x != 0) {
//        cout << "x-axis";
//    } else if (x == 0 && y != 0) {
//        cout << "y-axis";
//    }

    if (x==0 && y==0){
        cout << "origin";
        return 0;
    } else if (x==0){
        cout << "y - axis";
        return 0;
    } else if (y==0){
        cout << "x -axis";
        return 0;
    }

    if (y>0) {
        if (x>0) {
            cout << "1";
        } else {
            cout << "2";
        }
    } else if (y<0) {
        if (x>0) {
            cout << "4";
        } else {
            cout << "3";
        }
    }
    return 0;
}