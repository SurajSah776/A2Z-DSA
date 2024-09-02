/* Binary Search

Problem statement
You are given an integer array 'A' of size 'N', sorted in non-decreasing order. You are also given an integer 'target'.

Your task is to write a function to search for 'target' in the array 'A'. If it exists, return its index in 0-based indexing. If 'target' is not present in the array 'A', return -1.

Note: You must write an algorithm whose time complexity is O(LogN)

Sample Input:
7
1 3 7 9 11 12 45
3

Sample Output:
1

Explanation:
nums = [1, 3, 7, 9, 11, 12, 45],
The index of element '3' is 1.
Hence, the answer is '1'.

*/

#include <bits/stdc++.h>
using namespace std;

// Function to perform Binary Search
// Iterative Binary Search
int binarySearchIterative(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

// Recursive Binary Search
int binarySearchRecursive(vector<int> &nums, int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;
    if (target == nums[mid])
    {
        return mid;
    }
    else if (target > nums[mid])
    {
        return binarySearchRecursive(nums, mid + 1, high, target);
    }
    else
    {
        return binarySearchRecursive(nums, low, mid - 1, target);
    }
}

// Driver Code
int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;

    vector<int> arr(n);

    // Taking user input
    cout << "Enter elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "\nEnter Target to search : ";
    cin >> target;

    // Iterative
    // int result = binarySearchIterative(arr, target);

    // Recursive
    int low = 0;
    int high = n - 1;
    int result = binarySearchRecursive(arr, low, high, target);

    if (result != -1)
    {
        cout << "Found at index " << result << endl;
    }
    else
    {
        cout << "Not Found !" << endl;
    }

    return 0;
}