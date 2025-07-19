#include <bits/stdc++.h>
using namespace std;

// Longest prefix suffix
void lps_find(vector<int> &lps, string s)
{
    int prefix = 0, suffix = 1;
    while (suffix < s.size())
    {
        if (s[prefix] == s[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++, suffix++;
        }
        else
        {
            if (prefix == 0)
                suffix++;
            else
                prefix = lps[prefix - 1];
        }
    }
}

// Pattern Matching
bool KMP_MATCH(string str1, string str2)
{
    vector<int> lps(str2.size(), 0);
    lps_find(lps, str2);
    int first = 0, second = 1;
    while (second < str2.size() && first < str1.size())
    {
        if (str1[first] == str2[second])
            first++, second++;
        else
        {
            if (second == 0)
                first++;
            else
                second = lps[second - 1];
        }
    }
    if (second == str2.size())
        return 1;

    return 0;
}

// Main function
int repeatedStringMatch(string a, string b)
{

    if (a == b)
        return 1;

    string temp = a;
    int repeat = 1;

    while (temp.size() < b.size())
    {
        temp += a;
        repeat++;
    }

    // KMP Pattern Match
    if (KMP_MATCH(temp, b) == 1)
        return repeat;

    // temp+a, KMP Pattern Match
    if (KMP_MATCH(temp + a, b) == 1)
        return repeat + 1;

    return -1;
}

int main()
{
    string a;
    cout<<"Enter string 1: ";
    getline(cin,a);
    string b;
    cout<<"Enter string 2: ";
    getline(cin,b);

    cout<<"String1 should be repeated "<<repeatedStringMatch(a,b)<<" times such that String2 becomes a substring of String1.";
    return 0;
}