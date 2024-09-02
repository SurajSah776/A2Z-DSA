/*
Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

Note: You must write an algorithm with O(log n) runtime complexity.


Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find the first and last position of an element
vector<int> firstAndLastPosition(vector<int> &arr, int x)
{
    // Finding the First Occurrence position(Lower Bound with slight change)
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    int first = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Optimization
    if (first == -1)
    {
        return {-1, -1};
    }
    else
    {
        // Finding the Last Occurrence position
        low = 0, high = n - 1;
        int last = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x)
            {
                last = mid;
                low = mid + 1;
            }
            else if (arr[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return {first, last};
    }
}

// Driver Code
int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector<int> arr(n);

    // Taking user input
    cout << "Enter the elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Query
    int x;
    cout << "Enter the element to search: ";
    cin >> x;

    vector<int> range = firstAndLastPosition(arr, x);

    cout << "[ " << range[0] << ", " << range[1] << " ]" << endl;

    return 0;
}