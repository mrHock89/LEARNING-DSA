#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int fact = 1;

    for(num; num > 1; num--){
        fact = fact * num;
    }
    cout << "Factorial is : " << fact << endl;
    return 0;
}

// 5! = 5 * 4 * 3 * 2 * 1