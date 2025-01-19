#include <iostream>
#include <vector>
using namespace std;

string sortSentence(string s) {
        vector<string>ans(10);
        string temp;
        int count = 0, index=0;
        while(index<s.size())
        {
            if(s[index] == ' ')
            {
                int position = temp[temp.size()-1] - '0';
                temp.pop_back();
                ans[position] = temp;
                temp.clear();
                count++; 
            }

            else
                temp+=s[index];

            index++;
        }
        int position = temp[temp.size()-1] - '0';
        temp.pop_back();
        ans[position] = temp;
        temp.clear();
        count++;

        //Printing the string
        for(int i=1; i<=count; i++){
            temp+=ans[i];
            temp+=' ';
        }
        temp.pop_back();

        return temp;
    }

int main (){
    string s;

    //Number ranges from 1-9
    getline(cin,s); //Shivam4 name2 my is3
    cout<<"Sorted sentence is: "<<sortSentence(s);
    return 0;
}