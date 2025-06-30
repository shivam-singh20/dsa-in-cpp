#include <iostream>
#include <vector>
using namespace std;

int KOKO(int n,vector<int>piles,int hours)
{
    int start=0, end=0, ans=0, mid=0;
    for(int i=0; i<n; i++)
    {
        start += piles[i];
        end = max(end,piles[i]);
    }
    start /= hours;
    while(start<=end)
    {
        mid = start + (end - start)/2;
        int total_time=0;
        for(int i=0; i<n; i++)
        {
            total_time += piles[i]/mid;
            if(piles[i]/mid)
                total_time++;
        }
        if(total_time<=hours)
        {
            ans=mid;
            end = mid-1;
        }
        else
            start = mid + 1;
    }
    return ans;
}

int main (){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    vector<int>piles(n);
    cout<<"Enter number of bananas in each piles:\n";
    for(int i=0; i<n; i++)
    {
        cin>>piles[i];
    }

    int hours;
    cout<<"Enter time to eat bananas: ";
    cin>>hours;

    cout<<"Minimum number of bananas KOKO can eat from each pile is: "<<KOKO(n,piles,hours);

    return 0;
}

