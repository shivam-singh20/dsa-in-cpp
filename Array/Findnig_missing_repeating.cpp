#include <iostream>
#include <vector>
using namespace std;

void I_method(int arr[], int n){
    vector<int> count(n,0);
    for(int i=0; i<n; i++)
        count[arr[i]-1]++;
    
    //Missing number
    for(int i=0; i<n; i++){
        if(count[i]==0){
            cout<<"Missng number is: "<< i+1;
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
    
    I_method(arr,n);
    return 0;
}