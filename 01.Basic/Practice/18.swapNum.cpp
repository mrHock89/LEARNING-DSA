#include<iostream>
using namespace std;

void swap_value(int a, int b){
    int temp = 0;
    temp = b;
    b = a;
    a = temp;
    cout << "a = " << a << " and b = " << b << endl;
}

int main(){
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;
    swap_value(a,b);
}