#include<iostream> 
using namespace std;
int main(){
    int num = 5;
    for(int i = 0; i < 5; i++){
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