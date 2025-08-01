#include <bits/stdc++.h>
using namespace std;

int Perfect_Sum(vector<int>arr, int n, int index, int target)
{
    if(index == n)
        return target == 0;

    return Perfect_Sum(arr,n,index+1,target) + Perfect_Sum(arr,n,index+1,target - arr[index]);
}

int main (){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter numbers: "<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int target;
    cout<<"Enter target: ";
    cin>>target;

    int index=0;
    
    cout<<"Total no. of subset that contains "<<target<<" as a sum is "<< Perfect_Sum(arr,n,index,target);
    return 0;
}