/*
 *** Pattern - 1 ***

    * * * *
    * * * *
    * * * *
    * * * *
*/
#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;

    // Function to Print the Pattern
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}
