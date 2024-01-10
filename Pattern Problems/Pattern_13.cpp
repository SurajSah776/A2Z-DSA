/*
*** Pattern - 13 ***
1
2 3
4 5 6
5 6 7 8
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Function to Print the Pattern
    int number = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    return 0;
}
