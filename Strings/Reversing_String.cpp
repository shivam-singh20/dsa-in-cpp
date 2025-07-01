#include <iostream>
using namespace std;

int main (){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<"Entered string: "<<s<<endl;
    int start=0, end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<"Swapped string: "<<s;

    //Calculating size without using s.size()
    int size=0;
    while(s[size]!='\0'){
        size++;
    }
    cout<<endl<<size<<endl;

    //Pallindrome or not 
    string s2 = "naman";
    int i=0, j=s2.size()-1;
    while(i<j){
        if(s2[i]!=s2[j]){
            cout<<"not an pallindrome.";
            return 0;
        }
        i++; j--;
    }
    cout<<"Is a pallindrome.";
}