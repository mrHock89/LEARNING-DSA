// 2d array
#include<iostream>
using namespace std;

int main(){
    int arr [3][5]; // row and column
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Your 2D array is : " << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout << arr[i][j] << " ";
        }
    }

    cout << endl;
    cout << arr;
    return 0;

}