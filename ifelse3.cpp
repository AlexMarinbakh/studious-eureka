#include<iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter two numbers\n";
    cin >> x;
    cin >> y;
    if (x > y) {
        cout << x << "is the larger number\n";
    }
    else if(y > x) {
        cout << y << "is the larger number\n";
    }
}