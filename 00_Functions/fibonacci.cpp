#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n; 
    cout<<"Enter range: ";
    cin>>n;

    vector<int>ans(n);

    ans[0] = 0;
    ans[1] = 1;

    for(int i=2; i<n; i++)
    {
        ans[i] = ans[i-1] + ans[i-2];
    }
    cout<<"Fibonacci Series is as follow: "<<endl;
    for(int i=0; i<n; i++)
        cout<<ans[i]<<" ";
}