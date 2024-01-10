/*
*** Pattern - 12 ***
1      1
12    21
123  321
12344321
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Function to Print the Pattern
    int space = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {

        // Numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // Numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        space = space - 2;

        cout << endl;
    }

    return 0;
}
