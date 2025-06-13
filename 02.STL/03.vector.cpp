#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(2);
    vector<pair<int , int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);
        cout << vec[0].first << endl;;
        cout << vec[0].second << endl;;

        // Container of vector
        vector<int> v1(5, 100); // cotainer of 5 with the initial value of 100
        cout << v1.size() << endl;
        for(int i = 0; i < v1.size(); i++){
            cout << v1[i] << " ";
        }
        vector<int> v2(5); // cotainer of 5 with the initial value of 0
        cout << v2.size() << endl;
        for(int i = 0; i < v2.size(); i++){
            cout << v2[i] << " ";
        }
        cout << endl;
        //  Copy a vector to another
        vector<int> v3(v1);
        for(int i = 0; i < v1.size(); i++){
            cout << v3[i] << " ";
        }
        return 0;
}