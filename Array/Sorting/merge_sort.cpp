#include <bits/stdc++.h>
using namespace std;

// T.C - O(nlogn) , S.C - O(n)

void merge(vector<int>&arr, int start, int mid, int end)
{
    vector<int>a(end-start+1);
    int index = 0;
    int left = start, right = mid + 1;
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            a[index] = arr[left];
            left++,index++;
        }
        else
        {
            a[index] = arr[right];
            right++,index++;
        }
    }
    while(left<=mid)
    {
        a[index] = arr[left];
        index++, left++;
    }
    while(right<=end)
    {
        a[index] = arr[right];
        index++, right++;
    }

    index = 0;

    while(start<=end)
    {
        arr[start] = a[index];
        index++, start++;
    }
}

void divide(vector<int>&arr, int start, int end)
{
    if(start==end)
        return;
    
    int mid = start + (end - start)/2;
    divide(arr,start,mid);  //Left part mein divide karna
    divide(arr,mid+1,end);  //Right part mein divide karna

    merge(arr,start,mid,end);

}


int main (){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements in array: "<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int i = 0, j = arr.size()-1;
    divide(arr,i,j);
    
    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    
    return 0;
}