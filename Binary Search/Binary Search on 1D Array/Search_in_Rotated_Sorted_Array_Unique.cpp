/*
Search in Rotated Sorted Array(Unique elements)

There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

Note: You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find the index of the given element
int SearchElement(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        // Left Sorted part
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // Right Sorted Part
        else
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
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

    int index = SearchElement(arr, x);

    if (index)
    {
        cout << "Element found at index : " << index << endl;
    }
    else
    {
        cout << "Element not found !" << " Index = " << index << endl;
    }

    return 0;
}