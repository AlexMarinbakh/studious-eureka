#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 0 and age <= 12) {
        cout << "Child\n";
    }
    if (age >= 13 and age <= 19) {
        cout << "Teenager\n";
    }
    if (age >= 20 and age <= 64) {
        cout << "Adult\n";
    }
    if (age >= 65) {
        cout << "Senior\n";
    }
}