// Declare two string variables.
// Take input for both strings from the user.
// Print the length of each string.
// Concatenate the two strings and print the combined string.

#include<iostream>
using namespace std;

int main(){
    string str1, str2;

    cout << "Enter two string: " << endl;
    getline(cin, str1);
    getline(cin, str2);

    cout << "Length of str1 is: " << str1.size() << endl;
    cout << "Length of str2 is: " << str2.size() << endl;

    string conCat = str1 + " " + str2;

    cout << "Concatenate String is : " << conCat << endl;

    cout << "Length of conCat string: " << conCat.size();

    return 0;

}