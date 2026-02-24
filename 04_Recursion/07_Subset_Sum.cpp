#include <bits/stdc++.h>
using namespace std;

void Subset_Sum(vector<int>nums, int n, int index, int sum, vector<int>& ans)
{
    // Base case
    if(index == n)
    {
        ans.push_back(sum);
        return;
    }
    //Left case means no condition
    Subset_Sum(nums,n,index+1,sum,ans);
    //Right case means yes condition
    Subset_Sum(nums,n,index+1,sum + nums[index], ans);
}

int main (){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter numbers:"<<endl;
    for(int i=0; i<n; i++)
        cin>>nums[i];

    int sum = 0, index = 0;
    vector<int>ans;

    Subset_Sum(nums,n,index,sum,ans);

    cout<<"Subset sum are: "<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }


    return 0;
}