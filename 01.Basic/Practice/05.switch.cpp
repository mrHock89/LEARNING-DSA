// Write a program that takes two numbers and an operator (+, -, *, /) as input from the user.
// Use a switch statement to perform the corresponding arithmetic operation and print the result. Handle division by zero.

#include<iostream>
using namespace std;

int main(){
    int a, b;
    char ch;
    cin >> a >> b >> ch;

    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << b - a;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "Error" << endl;
        break;
    }
    return 0;
}