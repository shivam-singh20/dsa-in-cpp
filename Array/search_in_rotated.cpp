#include <iostream>
using namespace std;

int Search_element(int arr[],int n){
    int ans=arr[0],start=0,end=n-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        //Left side sorted
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        //Right side sorted
        else{   //if(arr[mid]<arr[0])
            ans=arr[mid];
            end=mid-1;
        }
    }
        return ans;
}

int main (){
    int n,arr[1000];
    cout <<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter numbers in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Minimum number is "<<Search_element(arr,n);

    return 0;
}