#include <iostream>
#include <vector>
using namespace std;

//KMP Algorithm

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

    return 0;
}