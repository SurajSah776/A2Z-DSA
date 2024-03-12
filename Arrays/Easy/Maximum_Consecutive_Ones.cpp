/* Maximum Consecutive Ones
Problem statement
You are given an array ‘ARR’ of length ‘N’ consisting of only ‘0’s and ‘1’s. Your task is to determine the maximum length of the consecutive number of 1’s.

Sample Input 1:
2

8
0 1 1 0 0 1 1 1

4
0 1 1 0

Sample Output 1:
3
2
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find and return the maximum length of the consecutive number of ones
int consecutiveOnes(vector<int> &arr)
{
    int maximum = 0;
    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maximum = max(maximum, count);
        }
        else
        {
            count = 0;
        }
    }

    return maximum;
}

// Driver Code
int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;
    vector<int> arr(n);

    // Taking Input from user
    cout << "Enter elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int length = consecutiveOnes(arr);
    cout << "Maximum Consecutive Ones : " << length << endl;

    return 0;
}