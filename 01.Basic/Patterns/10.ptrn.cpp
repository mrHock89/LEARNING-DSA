#include<iostream>
using namespace std;

int main(){
    int num = 9;
    for(int i =0; i < num / 2; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i <= num / 2; i++){
        cout << "*";
    }
    cout << endl;
    for(int i = 0; i < num / 2; i++){
        for(int j = 0; j < num / 2 - i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}