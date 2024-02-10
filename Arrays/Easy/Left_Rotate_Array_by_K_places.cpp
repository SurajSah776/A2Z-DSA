/* Rotate Left Array by K Places
Problem statement
Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.

Example:
'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.
*/
#include <bits/stdc++.h>
using namespace std;

// Function to Left Rotate array by K places
vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size();
    // if (n == 0)
    // {
    //     return;
    // }
    // k = k % n;
    // if (k > n)
    // {
    //     return;
    // }

    int temp[k];
    // Copying first k elements into temporary array
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    // Shifting the remaining elements to left
    for (int i = 0; i < n - k; i++)
    {
        arr[i] = arr[i + k];
    }

    // Copying  elements from temporary array into main array
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - n + k];
    }
    return arr;
}

int main()
{
    int n, k, element;

    cout << "Enter N: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter array Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    cout << "Enter K: ";
    cin >> k;

    // Check Condition
    if (n == 0)
    {
        return 0;
    }
    k = k % n;
    if (k > n)
    {
        return 0;
    }

    // Call the function
    vector<int> rotatedArray = rotateArray(arr, k);
    for (auto i = rotatedArray.begin(); i != rotatedArray.end(); i++)
    {
        cout << *i << "  ";
    }

    return 0;
}