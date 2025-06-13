#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2, 3, 5, 32, 45, 87};
    v.insert(v.begin()+1, 300);
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
    vector<int> copy(2,39);
    v.insert(v.begin(), copy.begin(), copy.end());
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
    v.clear();
    cout << v.empty();
    return 0;
}