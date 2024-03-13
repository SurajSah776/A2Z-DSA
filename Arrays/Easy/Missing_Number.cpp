/* Find Missing Number

Problem statement
Given an array 'a' of size 'n-1' with elements of range 1 to 'n'. The array does not contain any duplicates. Your task is to find the missing number.


Sample Input 1 :
4
1 2 3

Sample Output 1:
4

Explanation Of Sample Input 1:
4 is the missing value in the range 1 to 4.
*/

#include <bits/stdc++.h>
using namespace std;

// Brute force approach
int bruteMissingNumber(vector<int> &a, int N)
{
    for (int i = 1; i <= N; i++)
    {
        int flag = 0;
        for (int j = 0; j < N - 1; j++)
        {
            if (a[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
}

// Better Approach
int betterMissingNumber(vector<int> &a, int N)
{
    int hash[N + 1] = {0};
    for (int i = 0; i < N; i++)
    {
        hash[a[i]] = 1;
    }

    // Reiterating
    for (int i = 1; i < N; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
}

// Optimal Approach - 1 SUM
int optimalSUMMissingNumber(vector<int> &a, int N)
{

    int sum = (N * (N + 1)) / 2;
    int asum = 0;
    for (int i = 0; i < N; i++)
    {
        asum += a[i];
    }

    return (sum - asum);
}

// Optimal Approach - 2 XOR
int optimalXORMissingNumber(vector<int> &a, int N)
{

    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < N - 1; i++)
    {
        xor1 = xor1 ^ (i + 1);
        xor2 = xor2 ^ a[i];
    }
    xor1 = xor1 ^ N;

    return (xor1 ^ xor2);
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    // Taking Input from user
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    // int num = bruteMissingNumber(a, n);
    // int num = betterMissingNumber(a, n);
    // int num = optimalSUMMissingNumber(a, n);
    int num = optimalXORMissingNumber(a, n);
    cout << "Missing number = " << num << endl;
    return 0;
}