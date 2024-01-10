/*
*** Pattern - 11 ***
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Function to Print the Pattern
    for (int i = 1; i <= n; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
