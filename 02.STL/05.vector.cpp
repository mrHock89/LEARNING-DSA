#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2, 3, 54, 21, 9};
    cout << v.size();
    cout << endl;
    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;
    // v.erase(v.begin());
    // cout << v.size();
    // cout << endl;
    // for(auto i: v){
    //     cout << i << " ";
    // }
    v.erase(v.begin(), v.begin()+2);
    cout << v.size();
    cout << endl;
    for(auto i: v){
        cout << i << " ";
    }
    return 0;
}