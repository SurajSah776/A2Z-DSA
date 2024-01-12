/*
*** Pattern - 17 ***
   A
  ABA
 ABCBA
ABCDCBA
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Function to Print the Pattern
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < (n - 1 - i); j++)
        {
            cout << " ";
        }
        // Letter
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j;
        }

        for (char j = 'A' + i; j >= 'A'; j--)
        {
            cout << j;
        }

        // Space
        for (int j = 0; j < (n - 1 - i); j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}