#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n)
{
    vector<int> fib(n);
    if (n <= 2)
        return n;

    fib[0] = 1;
    fib[1] = 2;

    for (int i = 2; i < n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    return fib[fib.size() - 1];
}

int main()
{
    int n;
    cout<<"Enter number of stairs: ";
    cin>>n;

    cout<<"Total number of ways to climb stairs are: "<<climbStairs(n);
    return 0;
}