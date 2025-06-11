#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter the age: ";
    cin >> age;
    if(age >= 18){
        cout << "Adult" << endl;
    } else {
        cout << "Not adult" << endl;
    }
    return 0;
}