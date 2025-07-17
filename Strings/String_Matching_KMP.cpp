#include <iostream>
using namespace std;

// T.C - O(M*N) and S.C - O(1)

int brute_force(string haystack, string needle)
{
    int n = haystack.size(), m = needle.size();
    for (int i = 0; i <= n - m; i++)
    {
        int first = i, second = 0;
        while (second < m)
        {
            if (haystack[first] == needle[second])
                first++, second++;
            else
                break;
        }
        if (second == m)
            return first - second;
    }
    return -1;
}

int main()
{
    string haystack = "Shivam";
    string needle = "hiv";

    cout << "String is matching from " << brute_force(haystack, needle) << " index.";

    return 0;
}