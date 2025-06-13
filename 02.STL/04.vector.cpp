#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v= {20, 10, 50 ,100};
    // Iteration
    // begin
    // vector<int>::iterator i = v.begin();
    // i++;
    // cout << *(i) << " ";

    // i += 2;
    // cout << *(i) << " ";

    // // v.end() -> This will indicate the addres of the element after the last element
    // vector<int>::iterator j = v.end();
    // cout << *j << " "; // 0
    // j--;
    // cout << *j << " "; // 100
    // // vector<int>::iterator j = v.rend();
    // cout << v.back() << " ";

    // Loop usung iterator
    // Default
    for(vector<int>::iterator i = v.begin(); i != v.end();i++){
        cout << *i << " ";
    }
    cout << endl;
    // Short for,
     for(auto i = v.begin(); i != v.end();i++){
        cout << *i << " ";
    }
    cout << endl;
    //  using for each loop
    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;
    return 0;

}