#include <iostream>
using namespace std;

void Fun(int a[],int n){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}


int main (){
    int arr[5]={1,2,3,4,5};
    Fun(arr,5);
    return 0;
}