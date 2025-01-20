#include <iostream>
#include <vector>
using namespace std;

// For T.C - O(n) and S.C - O(1)
void II_method(int arr[], int n){
    for(int i=0; i<n; i++)
        arr[i]--;

    for(int i=0; i<n; i++){
        arr[arr[i] % n] += n;
    }

    // //Missing number
    // cout<<"Missing number in the array is: ";
    // for(int i=0; i<n; i++){
    //     if(arr[i]/n==0)
    //         cout<<i+1;
    //         break;   
    // }
    // cout<<endl;
    //Repeating number
    cout<<"Repeating number in the array is: ";
    for(int i=0; i<n; i++){
        if(arr[i]/n==2)
            cout<<i+1; 
    }
}


// For T.C - O(n) and S.C - O(n)

void I_method(int arr[], int n){
    vector<int> count(n,0);
    for(int i=0; i<n; i++)
        count[arr[i]-1]++;
    
    //Missing number
    for(int i=0; i<n; i++){
        if(count[i]==0){
            cout<<"Missing number is: "<< i+1;
            break;
        }
    }
    cout << endl;
    //Repeating number
    for(int i=0; i<n; i++){
        if(count[i]>1)
            cout<<"Repeating number is: "<< i+1;
    }
}

int main (){
    int n,arr[1000];
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of array:\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    // I_method(arr,n);
    // cout<<endl;
    II_method(arr,n);
    return 0;
}