#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= 2 * num; j++)
        {
            if (j <= i || j >= 2 * num - i + 1)
            {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}