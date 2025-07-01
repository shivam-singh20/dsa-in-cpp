#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int maximum_sum = 0;
    for(int i=0; i<n; i++)
    {
        int prefix = 0;
        for(int j=i; j<n; j++)
        {
            prefix = prefix + arr[j];
            maximum_sum = max(maximum_sum,prefix);
        }
    }
    cout<<maximum_sum;

    return 0;
}