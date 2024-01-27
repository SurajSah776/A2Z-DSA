/*
Largest Element in the Array
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element in the array using -> Brute Force  (Sorting and returning last index)
// Time Complexity- O(nlog(n))

// Function to find the largest element in the array using -> Optimal
// Time Complexity- O(n)
int largestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

// Driver Code
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Largest Element = " << largestElement(arr, size) << endl;
    return 0;
}
