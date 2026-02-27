#include<bits/stdc++.h>
using namespace std;

// Difference between Set, Multiset, UnorderedSet:
// 1. Set - In set values are stored in sorted order and all the values are unique.
// 2. Multiset - In multiset values are stored in sorted order and repetition of values are allowed.
// 3. UnorderedSet - In unordered_set values are stored randomly and all the values are unique.
// 4. Unordered_Multiset - In unordered_multiset values are stored randomly and repetition of values are allowed.

// In Short:
// 1. Set - Sorted, Unique Elements 
// 2. Multiset - Sorted, Repetition is allowed
// 3. UnorderedSet - Random order, Unique elements
// 4. Unordered_Multiset - Random order, Repetition is allowed

int main()
{
    unordered_set<int>s;

    s.insert(10);
    s.insert(50);
    s.insert(60);
    s.insert(30);
    s.insert(170);
    s.insert(90);
    s.insert(10);
    s.insert(60);

    for(auto it = s.begin(); it != s.end(); it++)
        cout<<*it<<" ";

    cout<<endl;

    unordered_multiset<int>s2;
    s2.insert(10);
    s2.insert(50);
    s2.insert(60);
    s2.insert(30);
    s2.insert(170);
    s2.insert(90);
    s2.insert(10);
    s2.insert(60);

    for(auto it = s2.begin(); it != s2.end(); it++)
        cout<<*it<<" ";
}