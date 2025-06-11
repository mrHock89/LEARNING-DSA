#include<iostream>
using namespace std;

int main(){
    int num[5];
    cout << "Enter 5 number to store it in the array: ";
    for(int i = 0; i < 5; i++){
        cin >> num[i];
    }

    int sum = 0;

    // Loop to calculate the sum of array elements
    for(int i = 0; i < 5; i++){
        sum = sum + num[i];
    }

    cout << "The sum of all array elements are : " << sum << endl;
    return 0;
}