#include <iostream>
#include<algorithm>
using namespace std;

void On(int arr[],int n,int target){
    //Array should be in sorted form
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<start<<" "<<end;
            break;
        }
        else if(arr[start]+arr[end]>target)
            end--;
        else
            start++;
    }
}

void On2(int arr[],int n,int target){

    //For T.C O(n2)
    cout<<"The numbers are: ";
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target)
                cout<<arr[i]<<" "<<arr[j];
        }
    }
}

int main(){
    int arr[1000],n,target;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target: ";
    cin>>target;
    
    On2(arr,n,target);
    cout<<"\nThe indexes are: ";
    On(arr,n,target);


    return 0;
}