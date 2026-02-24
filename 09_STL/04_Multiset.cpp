#include<bits/stdc++.h>
using namespace std;

// Multiset is used to access repeating elements in the insertion part
// Same as Set

int main()
{
    multiset<int>m1;

    m1.insert(10);
    m1.insert(20);
    m1.insert(340);
    m1.insert(142);
    m1.insert(67);
    m1.insert(32);
    m1.insert(10);
    m1.insert(20);

    // In ascending order
    for(auto it = m1.begin(); it != m1.end(); it++)
        cout<<*it<<" ";
    
        cout<<endl;

    // In descending order
    multiset<int,greater<int>> m2;
    m2.insert(10);
    m2.insert(20);
    m2.insert(340);
    m2.insert(142);
    m2.insert(67);
    m2.insert(32);
    m2.insert(10);
    m2.insert(20);

    for(auto it = m2.begin(); it != m2.end(); it++)
        cout<<*it<<" ";

}