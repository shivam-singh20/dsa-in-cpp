#include <iostream>
#include <vector>
using namespace std;

int main (){
    string sentence = "adcsxfesgvsaads";
    vector<int>alpha(26,0);

    for(int i=0; i<sentence.size(); i++)
        alpha[sentence[i]-'a']++;

    string ans;
    for(int i=0; i<26; i++){
        char c = 'a' + i;
        while(alpha[i])
        {
            ans = ans + c;
            alpha[i]--;
        }
    }
    cout<<ans;
    return 0;
}