/*    Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1
*/

#include <bits/stdc++.h>
using namespace std;

// Function to Implement Search Insert Position
int SearchInsertPosition(vector<int> arr, int n, int target)
{
    int ans = n;
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
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
    cout << "\nEnter element need to be searched/inserted : ";
    cin >> target;

    int searchIndex = SearchInsertPosition(arr, n, target);
    cout << "Index Position = " << searchIndex << endl;

    return 0;
}