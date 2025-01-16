#include <iostream>
using namespace std;

int main (){
    char arr[] = {'S','H','I','V','A','M'};
    cout<<arr<<endl;

    for(int i=0; i<6; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    char arr1[10];
    cin>>arr1;
    arr1[2] = '\0'; //Null value
    cout<<arr1<<endl; 

    string s;
    getline(cin,s);   //Print spaces
    cout<<s<<endl<<s.size();

    string s1 = "Shivam", s2 = "Kumar";
    string s3 = s1+s2; //Append
    s1=s1+"Singh";
    cout<<s1<<" ";
    string s4 = s1.append(s2);
    s3.push_back('s');
    s4.pop_back();
    cout<<s3<<" ";
    cout<<s4;

    cout<<s3.size()<<endl;

    string s5 = "My \"name\" is shivam kumar singh"; //Printing escape character - \" \";
    string s6 = "\\"; //Printing \ in string using escape character
    s6 = "\\0"; //Printing null character 
    cout<<s6;
    cout<<s5;
}
    

