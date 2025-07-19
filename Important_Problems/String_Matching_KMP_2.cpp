#include <bits/stdc++.h>
using namespace std;

// T.C - O(n+m), S.C - O(n)

void lps_find(vector<int>& lps, string s)
{
    int prefix = 0, suffix = 1;
    while(suffix<s.size())
    {
        if(s[prefix] == s[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++, suffix++;
        }
        else
        {
            if(prefix == 0)
                suffix++;
            else
                prefix = lps[prefix - 1];
        }
    }
}

int main (){
    string str1; //aabaacaadaabaaba
    cout<<"Enter string 1: ";
    getline(cin,str1);
    
    string str2; //aaba
    cout<<"Enter string 2: ";
    getline(cin,str2);

    vector<int>lps(str2.size(),0);
    lps_find(lps, str2);

    vector<int>ans;
    int first = 0, second = 0;
    while(first<str1.size())
    {
        if(str1[first] == str2[second])
            first++, second++;
        else
        {
            if(second == 0)
                first++;
            else
                second = lps[second - 1];
        }

        if(second == str2.size())
        {
            ans.push_back(first - second);
            second = lps[second - 1];
        }
    }
    cout<<"String is matching on [";
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<"";

    cout<<"] index.";

    return 0;
}