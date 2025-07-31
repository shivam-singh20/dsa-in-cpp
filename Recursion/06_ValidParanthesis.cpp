#include <bits/stdc++.h>
using namespace std;

void Parenthesis(int n, int left, int right, vector<string>& ans, string& temp)
{
    // Base case
    if(right==n && left==n)
    {
        ans.push_back(temp);
        return;
    }

    // Left Paranthesis
    if(left<n)
    {
        temp.push_back('(');
        Parenthesis(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    // Right Paranthesis
    if(right<left)
    {
        temp.push_back(')');
        Parenthesis(n,left,right+1,ans,temp);
        temp.pop_back();
    }
}

int main (){
    int n;
    cout<<"Enter number of sequence you want: ";
    cin>>n;
    int left = 0, right = 0;
    vector<string>ans;
    string temp;
    Parenthesis(n,left,right,ans,temp);
    cout<<"Total number of valid parenthesis are: "<<endl;

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        
    return 0;
}