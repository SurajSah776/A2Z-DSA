/*
*** Pattern - 19 ***

 D
 D C
 D C B
 D C B A

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
        for (char j = ('A' + n - 1); j >= ('A' + n - 1) - i; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}