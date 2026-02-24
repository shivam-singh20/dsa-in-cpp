#include <bits/stdc++.h>
using namespace std;

int Sum(int arr[],int n, int target)
{
    if(target<0)
        return 0;
    if(target == 0)
        return 1;

    int ans=0;
    for(int i=0; i<n; i++)
    {
        ans += Sum(arr,n,target - arr[i]);
    }
    return ans;
}

int main (){
    int n, target;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter target: ";
    cin>>target;
    int arr[1000];
    cout<<"Enter elements in array:\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    
    cout<<"Total ways are: "<<Sum(arr,n,target);

    return 0;
}