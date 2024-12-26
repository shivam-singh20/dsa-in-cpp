#include <iostream>
#include<vector>
using namespace std;

int main (){
    int arr[1000],n,target;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target: ";
    cin>>target;
    //For T.C O(n2)
    cout<<"Two sum is: ";
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j];
            }
        }
    }
    
    return 0;
}