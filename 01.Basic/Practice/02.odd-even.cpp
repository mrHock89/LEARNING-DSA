#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(num % 2 == 0){
        cout << num << " is a even number." << endl;
    } else {
        cout << num << " is a odd number." << endl;
    }
}