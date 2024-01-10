/*
*** Pattern - 15 ***
ABCDE
ABCD
ABC
AB
A
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
        for (char j = 'A'; j < 'A' + n - i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
