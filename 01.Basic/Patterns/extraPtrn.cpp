#include<iostream>
using namespace std;
int main(){
    int num = 6;
    for(int i = 1; i <= num + 1; i++){
        for(int j = num - i + 1; j >= 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}