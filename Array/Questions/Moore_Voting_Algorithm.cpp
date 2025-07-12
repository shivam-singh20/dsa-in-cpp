#include <bits/stdc++.h>
using namespace std;

int Winner(vector<int>arr,int n)
{
    int candidate, vote_count=0;
    for(int i=0; i<n; i++)
    {
        if(vote_count==0)
        {
            candidate = arr[i];
            vote_count = 1;
        }
        else
        {
            if(candidate == arr[i])
                vote_count++;
            else
                vote_count--;
        }
    }
    vote_count = 0;
    for(int i=0; i<n; i++)
    {
        if(candidate==arr[i])
            vote_count++;
    }
    if(vote_count>n/2)
        return candidate;
    else
        return -1;
}

int main (){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter candidate number:\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Candidate who got maximum number of vote is: "<<Winner(arr,n);


    return 0;
}