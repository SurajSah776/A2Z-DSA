#include <iostream>
using namespace std;

// Function to count digit
int countDigits(int n)
{
    int count = 0, orgNum = n, rem;

    while (n > 0)
    {
        rem = n % 10;
        if (orgNum % rem == 0)
        {
            count++;
        }
        n /= 10;
    }

    return count;
}

// Driver Code
int main()
{
    int num;
    cin >> num;
    cout << "Number of digits = " << countDigits(num) << endl;
    return 0;
}