#include<iostream>
using namespace std;
int main(){
    int num = 4;
    int space = 2 * (num -1);
    for(int i = 1; i <= num; i++){
        // number part 1
        for(int j = 1;  j <= i; j++){
            cout << j;
        }

        // space
        for(int j = 1; j <= space; j++){
            cout << " ";
        }

        // number part 2
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
    return 0;
}