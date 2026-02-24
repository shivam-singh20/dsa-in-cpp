#include<bits/stdc++.h>
using namespace std;

// 1. Pair is a container where pairing is done.
// 2. Syntax of pair is pair<type1,type2>name_of_pair
// 3. If you want to pair multiple values into a single pair then use pair inside pair.
// 4. Implementation is done using class.

int main()
{
    // If you want to pair name and age use this:
    pair<string,int> p;

    p = make_pair("Shivam", 22);

    //Printing pair values using .first and .second
    cout<<p.first<<" "<<p.second<<endl;

    //Pairing name and age using .first and .second
    p.first = "Mayank";
    p.second = 20;

    cout<<p.first<<" "<<p.second<<endl;

//Pairing multiple values

    // If you want to pair name, roll_number and age, weight use this:

    pair<pair<string, int>, pair<int, float>> p2;

    // Pairing by .first and .second

    p2.first.first = "Shivam";
    p2.first.second = 1001;
    
    p2.second.first = 22;
    p2.second.second = 78.2;

    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    //Pairing by make_pair

    p2 = make_pair(make_pair("Mayank", 1002),make_pair(20, 60.3));

    cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

}