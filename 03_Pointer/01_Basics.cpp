#include <bits/stdc++.h>
using namespace std;

int main (){
    int a = 10;
    cout<<&a<<endl; //Hexadecimal number
    int *ptr = &a; 
    cout<<ptr<<endl; //Hexadecimal number

    float b = 2.5;
    float *ptr1 = &b;
    cout<<*ptr1<<endl;
    cout<<ptr1<<endl;

    cout<<sizeof(ptr)<<endl; //4
    cout<<sizeof(ptr1)<<endl;//4
    return 0;
}