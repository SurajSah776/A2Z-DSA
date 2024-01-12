/*
*** Pattern - 20 ***

 **********
 ****  ****
 ***    ***
 **      **
 *        *
 *        *
 **      **
 ***    ***
 ****  ****
 **********

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Function to Print the Pattern
    // Upper Pattern
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        // Star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        // Star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        space += 2;
        cout << endl;
    }

    // Lower Pattern

    space = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        // Star
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        // Star
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }

    return 0;
}