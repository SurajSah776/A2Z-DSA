/* Remove Duplicates from Sorted Array
Problem statement
You are given a sorted integer array 'arr' of size 'n'.

You need to remove the duplicates from the array such that each element appears only once.

Return the length of this new array.

Note:
Do not allocate extra space for another array. You need to do this by modifying the given input array in place with O(1) extra memory.

For example:
'n' = 5, 'arr' = [1 2 2 2 3].
The new array will be [1 2 3].
So our answer is 3.
*/

#include <iostream>
using namespace std;

// Function to remove duplicates
int removeDuplicate(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Call the function
    int uniqueElement = removeDuplicate(arr, n);
    cout << uniqueElement << endl;

    return 0;
}