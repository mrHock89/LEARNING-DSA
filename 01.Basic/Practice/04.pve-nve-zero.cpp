// Write a program that takes an integer input.
// Determine if the number is positive, negative, or zero using if-else if-else and print the appropriate message.
#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a < 0){
        cout << "Negative" << endl;
    } else if(a == 0){
        cout << "Zero" << endl;
    } else {
        cout << "Positive" << endl;
    }

    return 0;
}