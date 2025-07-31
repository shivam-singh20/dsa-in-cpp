#include <bits/stdc++.h>
using namespace std;

void Subsequence(vector<int>nums, int n, int index, vector<vector<int>>& ans, vector<int>& temp)
{
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }

    //No condition
    Subsequence(nums,n,index+1,ans,temp);

    //Yes condition
    temp.push_back(nums[index]);
    Subsequence(nums,n,index+1,ans,temp);
    temp.pop_back();   //To reduce space complexity from O(n*2^n) to O(n)
}

int main (){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements in the array: "<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int index = 0;
    vector<int>temp;
    vector<vector<int>>ans;
    Subsequence(arr, n, index, ans, temp);

    cout<<endl<<"Subsets are: "<<endl;

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}