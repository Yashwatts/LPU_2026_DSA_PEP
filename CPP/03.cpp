#include <iostream>
using namespace std;

void hello(){
    cout << "Hello" << endl;
}

void hello2(){
    hello();
}

string add(){
    return "true";
}

float subtract(float a, float b){
    return a - b;
}

int main(){
    // cout << add() + "10";

    cout << subtract(5.2, 2.6);
}