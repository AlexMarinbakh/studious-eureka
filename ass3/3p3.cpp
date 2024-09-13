#include<iostream>
using namespace std;
int main() {
    float num1, num2, num3;
    cout << "1st number: ";
    cin >> num1;
    cout << "2nd number: ";
    cin >> num2;
    cout << "3rd number: ";
    cin >> num3;
    float avg = (num1 + num2 + num3)/3;
    cout << "Average: " << avg << endl;
}