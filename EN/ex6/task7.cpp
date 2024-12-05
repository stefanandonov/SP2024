//
// Created by Stefan Andonov on 7.11.24.
//

#include<iostream>
#include<cmath>

using namespace std;

float diameter(float radius) {
    return 2 * radius;
}

float perimeter(float radius) {
    return diameter(radius) * M_PI;
}

float area(float radius) {
    return pow(radius, 2) * M_PI;
}

int main() {

    float radius;
    cin >> radius;

    cout << "Diameter: " << diameter(radius) << endl;
    cout << "Area: " << area(radius)<< endl;
    cout << "Perimeter: " << perimeter(radius) << endl;
    return 0;
}