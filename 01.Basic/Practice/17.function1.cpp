#include<iostream>
using namespace std;
int add(int a, int b); // function decleration


int main(){
    int a = 3, b = 5;
    cout << add(a,b) << endl;
    return 0;
}

int add(int a, int b){
    return a+b;
}