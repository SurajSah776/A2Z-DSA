// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;
bool checkArmstrong(int n)
{
    int count = 0;
    int orgNum = n;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    n = orgNum;

    int sum = 0;
    while (n > 0)
    {
        sum += pow((n % 10), count);
        n /= 10;
    }

    if (sum == orgNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cin >> num;
    if (checkArmstrong(num))
    {
        cout << num << " is an Armstrong Number" << endl;
    }
    else
    {
        cout << num << " is not an Armstrong Number" << endl;
    }
    return 0;
}