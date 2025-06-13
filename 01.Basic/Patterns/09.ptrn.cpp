#include<iostream>
using namespace std;

int main(){
    int num = 5;
    // First part
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num - i - 1; j++){
            cout << " ";
        }
        for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }
        for(int j = 0; j < num - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }

    // Second part
    for(int i = 0; i < num; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < 2 * num - (2 * i + 1); j++){
            cout << "*";
        }
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}