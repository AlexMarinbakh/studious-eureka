#include<iostream>
using namespace std;
int main() {
double base, height, area;
cout << "Base of the triangle: ";
cin >> base;
cout << "Height of the triangle: ";
cin >> height;
area = (base * height) / 2;
cout << "Area of the triangle: " << area << endl;
}