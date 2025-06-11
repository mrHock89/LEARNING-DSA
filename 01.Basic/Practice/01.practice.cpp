#include<iostream>
using namespace std;

int main(){
    int a = 23;
    float b = 23.3;
    float floatNum = (float)a;
    cout << floatNum;
    cout << typeid(floatNum).name();

    cout << (int)b;
    return 0;
}