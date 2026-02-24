#include<bits/stdc++.h>
using namespace std;

// 1. List is a container 
// 2. It is implemented like doubly linked list
// 3. We can push_back("values"), push_front("values"), pop_back()
// 4. We can have access to front and back values of the list just like linked list
// 5. Syntax of list is list<data_type>name_of_list

int main()
{
    list<int>l1;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    l1.push_front(60);

    cout<<l1.front()<<" "<<l1.back()<<endl;
    cout<<"Size is: "<<l1.size()<<endl;

    //Adding element in front
    l1.push_front(60);
    cout<<l1.front()<<" "<<l1.back()<<endl;

    //Poping element from front and back
    l1.pop_back();
    l1.pop_front();

    cout<<l1.front()<<" "<<l1.back()<<endl;


    //Printing all values in the list using iteration
    
    // l1.begin()         l1.end()
    //    |                 |
    //    60 10 20 30 40 50

    for(auto it = l1.begin(); it!= l1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //Printing values in reverse order using iteration
    for(auto it = l1.rbegin(); it!=l1.rend(); it++)
    {
        cout<<*it<<" ";
    }

}