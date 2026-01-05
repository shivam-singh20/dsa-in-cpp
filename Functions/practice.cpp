#include <bits/stdc++.h>
using namespace std;

int square_sum(int n)
{
    if(n==1)
        return n;
    return (n*n*n) + square_sum(n-1);
}

int main()
{
    int num;
    cin>>num;
    if(num == 0) 
    {
        cout<<0;
        return 0;
    }
    cout<<square_sum(num);
    return 0;
}