// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;

// Function to Check Palindrome
bool checkPalindrome(int n)
{
    int orgNum = n, rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if (rev == orgNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cin >> num;
    if (checkPalindrome(num))
    {
        cout << num << " is a Palindrome Number" << endl;
    }
    else
    {
        cout << num << " is not a Palindrome Number" << endl;
    }

    return 0;
}