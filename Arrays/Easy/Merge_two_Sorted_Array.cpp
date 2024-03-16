/* Find Union
    Merge 2 Sorted Array
Problem statement
Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.



The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.



Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.


Sample Input 1 :
5 3
1 2 3 4 6
2 3 5

Sample Output 1 :
1 2 3 4 5 6
*/

#include <bits/stdc++.h>
using namespace std;

// Function to perform Union Operation on two arrays
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    vector<int> merged;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (merged.size() == 0 || merged.back() != a[i])
            {
                merged.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (merged.size() == 0 || merged.back() != b[j])
            {
                merged.push_back(b[j]);
            }
            j++;
        }
    }

    // Copying remaining elements
    while (i < n1)
    {
        if (merged.size() == 0 || merged.back() != a[i])
        {
            merged.push_back(a[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (merged.size() == 0 || merged.back() != b[j])
        {
            merged.push_back(b[j]);
        }
        j++;
    }

    return merged;
}

// Driver Code
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    // Taking Input from user
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> merged = sortedArray(a, b);

    for (int i = 0; i < merged.size(); i++)
    {
        cout << merged[i] << "  ";
    }
    return 0;
}