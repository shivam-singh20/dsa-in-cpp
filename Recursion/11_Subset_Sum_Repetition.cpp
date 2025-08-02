#include <bits/stdc++.h>
using namespace std;

int Subset_sum(vector<int>arr, int n, int index, int target)
{
    
    if(index == n || target < 0)
        return 0;
    if(target == 0)
        return 1;

    return Subset_sum(arr,n,index+1,target) + Subset_sum(arr,n,index,target - arr[index]);
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

    cout<<"Total no. of subset that contains "<<target<<" as a sum with repetition is "<< Subset_sum(arr,n,0,target);

    return 0;
}