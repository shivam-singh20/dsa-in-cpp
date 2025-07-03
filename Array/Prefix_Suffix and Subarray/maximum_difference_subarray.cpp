#include <bits/stdc++.h>
using namespace std;

int On2(vector<int>arr, int n)
{
    int ans = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ans = max(ans,arr[j]-arr[i]);
        }
    }
    return ans;
}


int On_On(vector<int>arr, int n)
{
    //T.C = O(n), S.C = O(n)
     
    vector<int>suffix_max(n);
    int ans = 0;
    suffix_max[n-1] = arr[n-1];

    for(int i=n-1; i>=0; i--)
    {
        suffix_max[i-1] = max(suffix_max[i],arr[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        ans = max(ans,suffix_max[i]-arr[i]);
    }
    
    return ans;
}


int On(vector<int>arr, int n)
{
    
}


int main (){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    
    vector<int>arr(n);
    cout<<"Enter elements in the array:\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Maximum difference in a contiguous subarray is: "<<On2(arr,n);
    cout<<"\nMaximum difference in a contiguous subarray is: "<<On_On(arr,n);
    cout<<"\nMaximum difference in a contiguous subarray is: "<<On(arr,n);

    return 0;
}