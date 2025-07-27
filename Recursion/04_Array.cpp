#include <bits/stdc++.h>
using namespace std;

void Print(int arr[], int index)
{
    if(index==-1)
        return;
        Print(arr,index-1);
    cout<<arr[index]<<" ";
}

int Sum(int arr[], int i)
{
    if(i==-1)
        return 0;
    return arr[i] + Sum(arr,i-1);
}

int MaxEle(int arr[], int index, int n)
{
    if(index == n-1)
        return arr[index];
    return max(arr[index],MaxEle(arr,index + 1, n));
}

int Product(int arr[], int index)
{
    if(index == 0)
        return arr[index];
    
    return arr[index] * Product(arr,index-1);
}


int main (){
    int arr[] = {1,2,3,4,5};
    Print(arr,4);
    cout<<endl;
    cout<<Sum(arr,4)<<endl;
    cout<<MaxEle(arr,0,5)<<endl;
    cout<<Product(arr,4)<<endl;


    return 0;
}