/* Move Zero's to End

Problem statement
Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while keeping the non-zero elements at the start of the array in their original order. Return the modified array.

Example :
Input: ‘n’ = 5, ‘arr’ = [1, 2, 0, 0, 2, 3]
Output: [1, 2, 2, 3, 0, 0]

Sample input 1:
4
0 0 0 1
Sample output 1:
1 0 0 0

Sample input 2:
5
4 0 3 2 5
Sample output 2:
4 3 2 5 0


Expected time complexity:
 The expected time complexity is O(n).

*/
#include <bits/stdc++.h>
using namespace std;

// Function to Move the Zero's to End
vector<int> moveZeros(vector<int> arr, int n)
{
    // For finding the first 0
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // if no 0 is present
    if (j == -1)
    {
        return arr;
    }

    // Moving the Zeros (By Swapping)
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            // Swapping the Values
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    return arr;
}

int main()
{
    int n, element;

    cout << "Enter N: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter array Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        arr.push_back(element);
    }

    // Call the function
    vector<int> result = moveZeros(arr, n);
    for (auto i = result.begin(); i != result.end(); i++)
    {
        cout << *i << "  ";
    }

    return 0;
}