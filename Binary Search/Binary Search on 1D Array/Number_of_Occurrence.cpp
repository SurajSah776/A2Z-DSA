/*
Count the Number of Occurrence

Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

Example 1:

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the
given array.
*/

#include <iostream>
using namespace std;

// Function to count the number of occurrence
int countOccurence(int arr[], int n, int x)
{
    // No. of occurrence = Last Occurrence - First Occurrence + 1;

    // Finding the First Occurrence position(Lower Bound with slight change)
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
        return 0;
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
        return (last - first + 1);
    }
}

// Driver Code
int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;

    int arr[n];

    // Taking user input
    cout << "Enter the elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Query
    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int count = countOccurence(arr, n, target);

    cout << "Number of occurrence = " << count << endl;

    return 0;
}