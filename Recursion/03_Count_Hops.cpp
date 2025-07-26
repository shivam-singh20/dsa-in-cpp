#include <bits/stdc++.h>
using namespace std;

int countWays(int n)
{
    if (n <= 2)
        return n;
    if (n == 3)
        return 4;

    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}

int main()
{
    int n;
    cout<<"Enter number of steps: ";
    cin>>n;
    cout<<"Total number of ways to hop at last step is: "<<countWays(n);
    return 0;
}