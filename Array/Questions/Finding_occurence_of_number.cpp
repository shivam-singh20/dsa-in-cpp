#include <bits/stdc++.h>
using namespace std;

//T.C - O(n), S.C - O(1)
vector<int> I_method(int arr, int n)
{
    
}

//T.C - O(n), S.C - O(n)
vector<int> II_method(int arr, int n)
{
    vector<int>count(n,0);
    for(int i=0; i<n; i++)
    {
        count[arr[i] - 1]++;
    }
    return count;
}

int main (){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter number between 1 to ",n,"endl";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    




    return 0;
}
