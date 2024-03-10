/* Find The Single Element

Problem statement
You are given a sorted array 'arr' of positive integers of size 'n'.

It contains each number exactly twice except for one number, which occurs exactly once.
Find the number that occurs exactly once.


Sample Input:
5
1 1 2 2 3

Sample Output:
3

Explanation:
{1, 2} each occurs twice, whereas 3 occurs only once.
Hence the answer is 3.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find the Single Element
// Brute Force Approach
int getSingleElementBrute(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                count++;
            }
        }
        if (count == 1)
        {
            return num;
        }
    }
}

// Better Approach
int getSingleElementBetter(vector<int> &arr)
{
    int maxi = 0;
    int n = arr.size(); // Size of the array

    // To find the maximum element from the array so to declare the hashmap of that size
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    // Creating hashmap
    unordered_map<int, int> hash{0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] == 1)
        {
            return arr[i];
        }
    }
}

// Optimal Approach
int getSingleElementOptimal(vector<int> &arr)
{
    // Using XOR
    int xor1 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xor1 = xor1 ^ arr[i];
    }

    return xor1;
}

// Driver Code
int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;
    vector<int> arr(n);

    // Taking Input from user
    cout << "Enter elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int element = getSingleElementBrute(arr);  // O(N^2)
    // int element = getSingleElementBetter(arr); //O(3N)
    int element = getSingleElementOptimal(arr); // O(N)
    cout << "Single Element : " << element << endl;

    return 0;
}