#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int reverse = 0;

    while(n)
    {
        int temp = n % 10;
        reverse = reverse * 10 + temp;
        n /= 10;
    }
    cout<<reverse;
}