#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p = {1,3};
    int sum = 0;
    cout << "sum : " << p.first + p.second;

    cout << "Nested pair" << endl;
    pair<int, pair<int, int>> p2 = {1, {2,3}};
    cout << p2.second.second << endl;

    // Pair array

    pair<int, int> arr[] = {{1,2}, {2,4}, {5,9}};
    cout << arr[2].second;
    return 0;
}