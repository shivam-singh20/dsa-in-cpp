#include <iostream>
using namespace std;

bool On(int arr[],int n){
    int total_sum=0,ans;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    int prefix=0;
    for(int i=0;i<n-1;i++){
        prefix+=arr[i];
        ans=total_sum-prefix;
        if(ans==prefix)
            return 1;
    }
    return 0;
}

bool On2(int arr[],int n){
    for(int i=0;i<n-1;i++){
    int sum1=0,sum2=0;
        for(int j=0;j<=i;j++){
            sum1+=arr[j];
        }
        for(int j=i+1;j<n;j++){
            sum2=sum2+arr[j];
        }
        if(sum1==sum2){
            return 1;
        }
    }
    return 0;
}
int main (){
    int arr[1000],n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Dividing array in 2 subarray with equal sum is: "<<On2(arr,n);
    cout<<"\nDividing array in 2 subarray with equal sum is: "<<On(arr,n);
    return 0;
}