/* Implement Lower Bound
Problem statement
You are given an array 'arr' sorted in non-decreasing order and a number 'x'.

You must return the index of lower bound of 'x'.

Note:
For a sorted array 'arr', 'lower_bound' of a number 'x' is defined as the smallest index 'idx' such that the value 'arr[idx]' is not less than 'x'
If all numbers are smaller than 'x', then 'n' should be the 'lower_bound' of 'x', where 'n' is the size of array.

Example:
Input: ‘arr’ = [1, 2, 2, 3] and 'x' = 0

Output: 0

Explanation: Index '0' is the smallest index such that 'arr[0]' is not less than 'x'.

Sample Input 1:
6
1 2 2 3 3 5
2

Sample Output 1:
1

Sample Input 2:
6
1 2 2 3 3 5
7

Sample Output 2:
6
*/

#include <bits/stdc++.h>
using namespace std;

// Function to Implement Lower Bound
int lowerBound(vector<int> arr, int n, int x)
{
    int ans = n;
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
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

    int x;
    cout << "\nEnter element whose lower bound is to be found : ";
    cin >> x;

    int lowerBd = lowerBound(arr, n, x);
    cout << "Lower Bound = " << lowerBd << endl;

    return 0;
}