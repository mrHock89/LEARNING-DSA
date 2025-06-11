#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a digit: " << endl;
    cin >> num;
    int rem;
    int sumDigit = 0;
    for(num; num > 0; ){
        rem = num % 10; // 123 % 10 = 3 / 2/ 1
        num = num / 10;
        sumDigit += rem;
    }
    cout << "Sum of all digit: " << sumDigit << endl;
    return 0;
}