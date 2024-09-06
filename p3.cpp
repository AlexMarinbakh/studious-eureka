#include<iostream>
using namespace std;
int main() {
double price;
cout << "Enter the price: ";
cin >> price;
// approach 1
double priceNtax1 = price * 0.09 + price;
cout << priceNtax1 << endl;
// approach 2
double priceNtax2 = price * 1.09;
cout << priceNtax2 << endl;
}