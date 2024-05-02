#include<iostream>
using namespace std;

int main() {
    int a;
    int fact = 1;
    cout << "Enter a number for factorial: ";
    cin >> a;
    for(int i = 1; i <= a; i++) {
        fact = fact * i;}
    cout << "The value of " << a << "! is " << fact;
    return 0;
}
