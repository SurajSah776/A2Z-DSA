/*
Intersection of Two Sorted Array
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    vector<int> intersection;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            intersection.push_back(a[i]);
            i++;
        }
    }

    return intersection;
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

    vector<int> intersection = sortedArray(a, b);

    for (int i = 0; i < intersection.size(); i++)
    {
        cout << intersection[i] << "  ";
    }
    return 0;
}