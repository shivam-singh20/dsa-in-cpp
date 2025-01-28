#include <iostream>
#include <vector>
using namespace std;

int main (){
    string s;
    // cout<<"Enter string: ";
    getline(cin,s);

    vector<int>count(256,0);
    int first = 0, second = 0, length = s.size(), different = 0;

    //Finding different characters in string
    while(first<s.size())
    {
        if(count[s[first]] == 0)
            different++;
        
        count[s[first]]++;
        first++;
    }

    for(int i=0; i<256; i++)
        count[i] = 0;
    first = 0;

    while(second<s.size())
    {
        while(different && second<s.size())
        {
            if(count[s[second]] == 0)
                different--;

            count[s[second]]++;
            second++;
        }
        length = min(length,second-first);
    }

    while(different != 1)
    {
        length = min(length,second-first);
        count[s[first]]--;

        if(count[s[first]] == 0)
            different++;
        
        first++;
    }
    cout<<"Size of smallest distinct window is: "<<length;
    return 0;
}