#include<iostream>
using namespace std;

int missing_integer(int arr[],int n,int k){
    int start=0,end=n-1,mid,ans=n;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    return ans+k;
}

int main (){
    int arr[1000],n,k;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter which kth number is to find: ";
    cin>>k;

    cout<<"Kth number is "<<missing_integer(arr,n,k);

    return 0;
}