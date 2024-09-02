/*
    Find Nth root of M

You are given 2 numbers (n , m); the task is to find n√m (nth root of m).

Example-1:
Input: n = 2, m = 9
Output: 3
Explanation: 3^2 = 9

Example-2:
Input: n = 3, m = 9
Output: -1
Explanation: 3rd root of 9 is not
integer.
*/

#include <iostream>
using namespace std;

int func(int mid, int n, int m)
{
    long long int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}

// Function to find the Nth root of given number
int NthRoot(int n, int m)
{
    int low = 1;
    int high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        int midNum = func(mid, n, m);
        if (midNum == 1)
            return mid;
        else if (midNum == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Driver Code
int main()
{
    int n, m;
    cout << "Enter n and m : ";
    cin >> n >> m;

    cout << "Nth root = " << NthRoot(n, m) << endl;
    return 0;
}