#include<iostream>
using namespace std;

int missing_integer1(int arr[],int n, int k)
{
    //T.C - O(n)

    int missing = 0, current_pos = 1, i = 0;
    while(true)
    {
        if(arr[i]==current_pos)
        {
            i++;
        }
        else{
            missing++;
            if(missing==k)
            {
                return current_pos ;
            }
        }
        current_pos++;
    }
    return -1;
}

int missing_integer2(int arr[],int n,int k){

    //T.C - O(log(n))

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
    cout<<"Enter value of k: ";
    cin>>k;

    cout<<"Kth missing number is "<<missing_integer1(arr,n,k)<<endl;

    cout<<"Kth missing number is "<<missing_integer2(arr,n,k);

    return 0;
}