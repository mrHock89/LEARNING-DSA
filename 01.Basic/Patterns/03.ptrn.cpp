#include<iostream>
using namespace std;
int main(){
    int r;
    cout << "Enter the number of row: ";
    cin >> r;
    for(int i = 0; i <= r; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}