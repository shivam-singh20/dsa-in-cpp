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
    arr1[2] = '\0';
    cout<<arr1<<endl; 

    string s;
    cin>>s;
    cout<<s;
}
    

