/*
Problem statement
You're given a sorted array 'a' of 'n' integers and an integer 'x'.

Find the floor and ceiling of 'x' in 'a[0..n-1]'.

Note:
Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.

Example:
Input:
n=6, x=5, a=[3, 4, 7, 8, 8, 10]

Output:
4

Explanation:
The floor and ceiling of 'x' = 5 are 4 and 7, respectively.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find the ceil and floor
pair<int, int> getCeilAndFloor(vector<int> &arr, int n, int x)
{
    // Finding Ceil(Smallest number in the array <= x)
    int ceil = n; // or ceil = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            ceil = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    // Finding Floor(Largest number in the array >=x)
    int floor = -1;
    low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x)
        {
            floor = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return {floor, ceil};
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
    cout << "Enter the element : ";
    cin >> x;

    pair<int, int> ceilFloor = getCeilAndFloor(arr, n, x);

    cout << "Floor = " << ceilFloor.first << " and Ceil = " << ceilFloor.second << endl;

    return 0;
}