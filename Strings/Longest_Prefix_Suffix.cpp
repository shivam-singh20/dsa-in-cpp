#include <iostream>
#include <vector>
using namespace std;

//KMP Algorithm

// T.C- O(n2)
int lps1(string s)
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
    cout<<"Enter string: ";
    getline(cin,s); //abcabdabcabdabdab

    vector<int>lps(s.size(),0);
    int pre = 0, suff = 1;

    while(suff < s.size())
    {
        //If prefix and suffix is matching
        if(s[pre] == s[suff])
        {
            lps[suff] = pre+1;
            pre++,suff++;
        }
        //If prefix and suffix not matching
        else{
            if(pre == 0)
            {
                lps[suff] = 0;
                suff++;
            }
            else
                pre = lps[pre - 1];
        }
    }
    cout<<"Length of longest prefix suffix is: "<<lps[s.size()-1];
    cout<<"\nLength of longest prefix suffix is: "<<lps1(s);

    return 0;
}