#include<bits/stdc++.h>
using namespace std;

// 1. Set is a container 
// 2. Set stores unique values inside the container 
// 3. Set stores values in sorted order by default ascending order 
// 4. Set is implemented by AVL Tree aka self balancing tree concept in which time complexity
//    for inserting, deleting and searching an element is O(logn) For Example - Creating account on instagram
// 5. Syntax of set is set <data_type> name_of_set

class Person {
    public:
    string name; 
    int age;

    // General Syntax for printing set with help of class It is getting sorted on the basis of age
    bool operator < (const Person &other) const
    {
        return age < other.age;
    }
};

int main()
{
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    s.insert(10);
    s.insert(50);
    s.insert(60);

    // Printing all elements in the set in ascending order
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // Printing all elements in the set in descending order
    set<int, greater<int>> s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);
    s1.insert(60);
    s1.insert(10);
    s1.insert(50);
    s1.insert(60);

    for(auto it = s1.begin(); it != s1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // Searching element in the set whether it is present or not
    if(s.find(60) != s.end())
    {
        cout<<"Present\n";
    }
    else
        cout<<"Not Present\n";

    // Searching element using count
    if(s.count(20)>0)
        cout<<"Present\n";
    else
        cout<<"Not Present\n";

    cout<<s.count(20)<<endl;

    //Deleting element from set
    s.erase(40);
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<s.count(40)<<endl;


    //Accessing class in set
    set<Person> s3;
    Person p1, p2, p3;

    p1.name = "Shivam", p1.age = 22;
    p2.name = "Mayank", p2.age = 20;
    p3.name = "Yash", p3.age = 21;

    s3.insert(p1);
    s3.insert(p2);
    s3.insert(p3);

    // It will give error as you are not specifying on which basis set should sort
    for(auto it = s3.begin(); it != s3.end(); it++)
        cout<<it->name<<" "<<it->age<<endl;
    
}