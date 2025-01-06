#include <iostream>
#include<vector>
using namespace std;

// For T.C - O(n4) and S.C - O(1)
bool n4(vector<int>& arr,int target){
    int n=arr.size();
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target)
                        return true;
                }
            }
        }
    }
    return false;
}

int main (){
    int n,target;
    cout<<"Enter size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter numbers: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Enter target: ";
    cin >> target;
    cout<<n4(arr,target);
    return 0;
}