#include <bits/stdc++.h>
using namespace std;

bool Target_Sum(vector<int>arr, int target, int index, int n)
{
    if(target == 0)
        return 1;
    if(index == n || target < 0)
        return 0;
    return Target_Sum(arr,target,index+1,n) || Target_Sum(arr,target - arr[index],index+1,n);
}

int main (){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter numbers: "<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int index = 0;
    int target;
    cout<<"Enter target: ";
    cin>>target;

    cout<<Target_Sum(arr,target,index,n);
    return 0;
}