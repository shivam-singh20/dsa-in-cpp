#include <bits/stdc++.h>
using namespace std;

void lps_find(string s, vector<int>lps)
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
    string str1, str2;

    cout<<"Enter string 1: ";
    getline(cin,str1);

    cout<<"Enter string 2: ";
    getline(cin,str2);

    //Building a string to find lps
    string s = str1;
    s += str1;

    //String matching code
    vector<int>lps(s.size(),0);
    lps_find(s,lps);

    bool ans = 0;

    int first = 0, second = 0;

    while(second<str2.size() && first<s.size())
    {
        if(s[first] == str2[second])
            first++, second++;

        else
        {
            if(second == 0)
                first++;
            else
                second = lps[second - 1];
        }
    }
    if(second == str2.size())
        ans = 1;

    cout<<ans;

    return 0;
}