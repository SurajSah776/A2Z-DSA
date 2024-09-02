/* Implement Upper Bound
Problem statement
You are given a sorted array ‘arr’ containing ‘n’ integers and an integer ‘x’.
Implement the ‘upperBound’ function to find the index of the upper bound of 'x' in the array.

Note:
The upper bound in a sorted array is the index of the first value that is greater than a given value.
If the greater value does not exist then the answer is 'n', Where 'n' is the size of the array.

Sample Input 1:
5
1 4 7 8 10
7

Sample Output 1:
3

Explanation of sample output 1:
In the given test case, the lowest value greater than 7 is 8 and is present at index 3(0-indexed).


Sample Input 2:
5
1 2 5 6 10
10

Sample Output 2:
5

Sample Input 3:
7
1 5 5 7 7 9 10
5

Sample Output 3:
3
*/

#include <bits/stdc++.h>
using namespace std;

// Function to Implement Upper Bound
int upperBound(vector<int> arr, int n, int x)
{
    int ans = n;
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x)
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
    cout << "\nEnter element whose Upper bound is to be found : ";
    cin >> x;

    int upperBd = upperBound(arr, n, x);
    cout << "Upper Bound = " << upperBd << endl;

    return 0;
}