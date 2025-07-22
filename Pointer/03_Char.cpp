#include <bits/stdc++.h>
using namespace std;

int main (){
    char c = 'a';
    cout<<(void*)&c<<endl; //Print address of c

    char *p = &c;
    cout<<(void*)p<<endl; //Print address of c
    cout<<*p<<endl;

    char arr[5] = "2458";
    char *ptr = arr;
    cout<<arr<<endl;
    cout<<ptr<<endl;

    //Printing address of arr
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;
    cout<<static_cast<void*>(arr)<<endl;

    return 0;
}