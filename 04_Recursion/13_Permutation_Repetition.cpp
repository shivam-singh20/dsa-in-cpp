#include <bits/stdc++.h>
using namespace std;

void Find_Permute(string& s, vector<string>& ans, int index)
{
    if(index == s.size())
    {
        ans.push_back(s);
        return;
    }

    vector<bool>count(26,0);

    for(int i=index; i<s.size(); i++)
    {
        if(count[s[i] - 'A'] == 0)
        {
            swap(s[i],s[index]);
            Find_Permute(s,ans,index+1);
            swap(s[i],s[index]);
            count[s[i] - 'A'] = 1;
        }
    }
}

int main (){
    string s;
    cout<<"Enter string that ranges between A-Z: ";
    getline(cin,s);

    vector<string>ans;

    Find_Permute(s,ans,0);

    cout << "All possible ways to arrange the string are:\n";

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}