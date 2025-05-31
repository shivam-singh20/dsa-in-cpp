#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[1000]={3,4,1,2,6};
    int min = INT_MAX, ans;
    for(int i=0; i<5; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        cout<<i;
    }
    

    return 0;
}