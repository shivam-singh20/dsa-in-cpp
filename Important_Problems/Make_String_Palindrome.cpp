#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter your string: ";
    getline(cin, s);

    int n = s.size();

    //Reversing a string
    string rev = s;

    int start = 0, end = n-1;
    while(start<=end)
    {
        swap(rev[start],rev[end]);
        start++;
        end--;
    }

    s += '#';  // Seperator between original string and reverse string

    s += rev;
    int m = s.size();

    vector<int> lps(m, 0);
    int pre = 0, suf = 1;

    while (suf < m)
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
    cout<<"\nNumber of minimum string that can be added to make given string a palindrome is: "<< n - lps[m-1];
    
    return 0;
}