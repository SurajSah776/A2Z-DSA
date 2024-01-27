/*
Second Largest Element & Second Smallest Element in the Array
*/
#include <bits/stdc++.h>
using namespace std;

/*
 * Brute Force  (Sorting and comparing from last index)
Time Complexity- O(nlog(n)) + O(n)

 * Better Approach
Time Complexity- O(n) + O(n)

 * Optimal Approach
Time Complexity- O(n)
*/

int secondLargest(vector<int> &a, int n)
{
    int largest = a[0];
    int slargest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest)
        {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> &a, int n)
{
    int smallest = a[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] > smallest && a[i] < ssmallest)
        {
            ssmallest = a[i];
        }
    }

    return ssmallest;
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

    int slargest = secondLargest(arr, size);
    int ssmallest = secondSmallest(arr, size);
    cout << "Second Largest Element = " << slargest << endl;
    cout << "Second Smallest Element = " << ssmallest << endl;
    return 0;
}
