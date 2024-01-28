/* Sum of all Divisors

 * Problem statement
You are given an integer ‘n’.
Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.

Example:
Input: ‘n’  = 5

Output: 21

Explanation:
We need to find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5.
‘sumOfDivisors(1)’ = 1
‘sumOfDivisors(2)’ = 2 + 1 = 3
‘sumOfDivisors(3)’ = 3 + 1 = 4
‘sumOfDivisors(4)’ = 4 + 2 +1 = 7
‘sumOfDivisors(5)’ = 5 + 1 = 6
Therefore our answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.

*/
#include <iostream>
using namespace std;

// Function
int sumOfAllDivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int sum = sumOfAllDivisors(n);
    cout << "Sum of all divisors of " << n << " = " << sum << endl;
    return 0;
}