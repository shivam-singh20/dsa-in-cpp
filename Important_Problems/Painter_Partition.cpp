#include <iostream>
using namespace std;

int Painter_Partition(int arr[],int n,int n_painters)
{
    int start=0,end=0,mid,ans;
    for(int i=0;i<n;i++)
    {
        start=max(start,arr[i]);
        end+=arr[i];
    }
    while(start<=end)
    {
        mid=start+(end-start)/2;
        int walls_length=0,count=1;
        for(int i=0;i<n;i++)
        {
            walls_length+=arr[i];
            if(walls_length>mid)
            {
                count++;
                walls_length=arr[i];
            }
        }
        if(count<=n_painters)
        {
            ans=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    return ans;
}

int main (){
    int arr[1000], n, n_painters;
    cout << "Enter number of walls: ";
    cin >> n;
    cout << "Enter lengths of the walls:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number of painters: ";
    cin >> n_painters;

    cout << "Therefore minimum time required to paint the walls is " <<Painter_Partition(arr, n, n_painters);

    return 0;
}