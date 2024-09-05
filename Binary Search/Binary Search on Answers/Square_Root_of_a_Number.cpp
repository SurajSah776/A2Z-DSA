/*
    Square root of a number

Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

Example 1:

Input:
x = 5
Output: 2
Explanation: Since, 5 is not a perfect square, floor of square_root of 5 is 2.
*/

#include <iostream>
using namespace std;

// Function to calculate the square root of given number
int SquareRoot(int n)
{
    int low = 1;
    int high = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid <= n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}

// Driver Code
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    cout << "Floor Square root = " << SquareRoot(num) << endl;
    return 0;
}