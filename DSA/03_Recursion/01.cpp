#include <iostream>
using namespace std;

void function(int n){
    if(n == 0) return;
    function(n - 1);
    cout << n << " ";
}

int factorial(int n){
    // base case
    if(n == 0 || n == 1) return 1;

    return n * factorial(n - 1);
}

int power(int x, int n){
    if(n == 1) return 1;
    return x * power(x, n-1);
}

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    function(10);
}