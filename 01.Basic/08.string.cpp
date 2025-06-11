#include<iostream> 
using namespace std;

int main(){
    string str = "Anirban";
    int len = str.size();
    for(int i = 0; i < len; i++){
        cout << str[i] << " ";
    }
    return 0;
}