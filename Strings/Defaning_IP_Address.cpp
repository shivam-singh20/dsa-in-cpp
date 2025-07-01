#include <iostream>
using namespace std;

int main (){
    string s="255.100.25.60";
    int index = 0;
    string ans;
    cout<<s<<endl;

    while(index<s.size()){
        if(s[index]=='.')
            ans+="[.]";
        else
            ans+=s[index];
        index++;
    }
    
    cout<<ans;
    return 0;
}