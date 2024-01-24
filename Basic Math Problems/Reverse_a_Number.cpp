#include <iostream>
using namespace std;

// Function to reverse the Number
int reverse(int x)
{
    long rev = 0;
    while (x != 0)
    {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    if (rev > INT32_MAX || rev < INT32_MIN)
    {
        return 0;
    }
    else
    {
        return int(rev);
    }
}

// Driver Code
int main()
{
    int num;
    cin >> num;

    cout << "The Reverse of " << num << " = " << reverse(num);

    return 0;
}
