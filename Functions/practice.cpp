#include <bits/stdc++.h>
using namespace std;

int lps(string s)
{
    int n = s.size();
    vector<string>prefix(s.size()-1);
    vector<string>suffix(s.size()-1);
    
    for(int i=1; i<n; i++)
    {
        string temp = "";
        for(int j=0; j<i; j++)
        {
            temp += s[j];
        }
        prefix[i-1] = temp;
    }

    for(int i=1; i<n; i++)
    {
        string temp = "";
        for(int j=n-i; j<n; j++)
        {
            temp += s[j];
        }
        suffix[i-1] = temp;
    }

    for (int i = n - 2; i >= 0; i--) {
        if (prefix[i] == suffix[i])
            return prefix[i].length();
    }
    return 0;
}

int main (){
    string s;
    getline(cin,s);
    cout<<s;
    cout<<lps(s);
}