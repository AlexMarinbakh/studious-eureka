#include<iostream>
using namespace std;
int main() {
    float num;
    cout << "Float number: ";
    cin >> num;
    ++num;
    ++num;
    num += 5;
    num -= 5;
    num *= 5;
    num /= 5;
    num -= 2;
    cout << "Final number: " << num << endl;
}