#include<iostream>
using namespace std;

int main(){
    int num = 5;
    for(int i = 0; i < num; i++){
        for(char ch = 'A'; ch <= 'A' + num -i - 1; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}