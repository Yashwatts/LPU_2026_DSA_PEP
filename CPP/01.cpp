#include <iostream>
using namespace std;

int main(){
    // int age = 5.5;
    // float num1 = 5.5;
    // cout << num1;

    int a = 5;
    int b = 10;

    // Operators
    // Arithmetic -> +, -, /, *, %
    // cout << a + b << endl;
    // a++; 
    // cout << a++ + ++b << endl;

    // Relational -> >, >=, <, <=, ==(comparison)
    // cout << (10 > 5) << endl;

    // Logical

    int p = 10000;
    int r = 2;
    int t = 2;
    int si = (p*r*t) / 100;
    if(si > 50) cout << "Will pay tax" << endl;
    else cout << "Will not pay tax" << endl;
}