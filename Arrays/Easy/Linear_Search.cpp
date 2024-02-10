/* Linear Search

Problem statement
You are given an array ‘arr’ containing ‘n’ integers. You are also given an integer ‘num’, and your task is to find whether ‘num’ is present in the array or not.

If ‘num’ is present in the array, return the 0-based index of the first occurrence of ‘num’. Else, return -1.

Example:
Input: ‘n’ = 5, ‘num’ = 4
'arr' =  [6,7,8,4,1]

Output: 3

Explanation:
4 is present at the 3rd index.
*/

#include <bits/stdc++.h>
using namespace std;

// Linear Search Function
int linearSearch(int n, int num, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, key, element;

    cout << "Enter N: ";
    cin >> n >> key;
    vector<int> arr;
    cout << "Enter array Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        arr.push_back(element);
    }

    // Call the function
    int index = linearSearch(n, key, arr);
    cout << "Index: " << index << endl;

    return 0;
}