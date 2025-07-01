#include <iostream>
#include <vector>
using namespace std;

bool Pangram(string &sen){
    int n = sen.size();
    vector<bool>alpha(26,0);

    for(int i=0; i<n; i++)
        alpha[sen[i]-'a'] = 1;

    for(int i=0; i<26; i++){
        if(alpha[i]==0)
            return false;
    }
    return true;
}

int main (){
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    cout<<Pangram(sentence);
    // return 0;
}