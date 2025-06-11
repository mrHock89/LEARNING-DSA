//Write a program that takes an integer (1-7) as input, representing a day of the week.
//Use a switch statement to print the name of the day (e.g., 1 for Monday, 2 for Tuesday, etc.). Handle invalid input.

#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter any number from 1 to 7." << endl;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "Mobday";
        break;
    case 2: 
        cout << "Tuesday";
        break;
    case 3: 
        cout << "Wednesday";
        break;
    case 4: 
        cout << "Thursday";
        break;
    case 5: 
        cout << "Friday";
        break;
    case 6: 
        cout << "Satarday";
        break;
    case 7: 
        cout << "Sundat=y";
        break;
    
    default:
        cout << "Error";
        break;
    }
    return 0;
}