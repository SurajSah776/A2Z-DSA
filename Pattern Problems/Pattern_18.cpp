/*
*** Pattern - 18 ***

 E
 DE
 CDE
 BCDE
 ABCDE

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
        for (char j = ('A' + n - 1) - i; j <= ('A' + n - 1); j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}