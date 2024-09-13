#include<iostream>
using namespace std;
int main() {
    cout << "Enter two numbers for x and y: ";
    int x, y;
    cin >> x >> y;
    // method to swap
    int temp = x;
    x = y;
    y = temp;
    cout << "x: " << x << "y: " << y << endl;
    // bonus method
    cout << "Enter two numbers for x and y again: ";
    cin >> x >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "x: " << x << "y: " << y << endl;
}