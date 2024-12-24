#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // creating vector
    vector <int> v;
    vector <int> v1(5,1);
    //Insert value in vector
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //size and capacity
    cout<<"Size of the vector is: "<< v.size()<<endl;
    cout<<"Capacity of the vector is: "<< v.capacity()<<endl;

    cout<<"Size of the vector is: "<< v1.size()<<endl;
    cout<<"Capacity of the vector is: "<< v1.capacity()<<endl;
    v1.push_back(5);
    cout<<"Size of the vector is: "<< v1.size()<<endl;
    cout<<"Capacity of the vector is: "<< v1.capacity()<<endl;

    // Delete values from a vector
    vector <int> v3;
    v3.push_back(2);
    v3.push_back(21);
    v3.push_back(12);
    v3.push_back(25);
    v3.push_back(92);
    for(int i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";

        cout<<endl;

    v3.pop_back();
    v3.erase(v3.begin()+2);  //erase the value at a specific index
    v3.insert(v3.begin()+2,50);  //insert value at provided index

    for(int i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";

    vector<int>a;
    a.push_back(3);
    a.push_back(31);
    a.push_back(113);
    a.push_back(43);
    a.push_back(30);

    for(auto i:a)
        cout<<i<<" ";

    cout<< endl;
    vector<int>b;
    b=a; //initialise values of a into b
    cout<<b.size()<<endl;
    cout<<b.front()<<endl; //print first element of b
    cout<<b.back()<<endl;  //print last element of b

    vector<int>ans;
    ans.push_back(16);
    ans.push_back(63);
    ans.push_back(46);
    ans.push_back(236);
    ans.push_back(26);
    
    // sort in ascending order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";

    cout<<endl;

    //sort in descending order
    // sort(ans.rbegin(),ans.rend());   //sort(ans.begin(),ans.end(),greater<int>()); 
    // for(int i=0;i<ans.size();i++)
    //     cout<<ans[i]<<" ";

    //search in binary search
    cout<<binary_search(ans.begin(),ans.end(),36)<<endl; //return true false;


    return 0;
}