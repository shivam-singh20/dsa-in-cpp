#include <bits/stdc++.h>
using namespace std;

int main (){
    // int a = 10;
    // cout<<&a<<endl; //Hexadecimal number
    // int *ptr = &a; 
    // cout<<ptr<<endl; //Hexadecimal number
    // char c = 'A';
    // cout<<&c;
    // char *ptr1 = &c; 
    // cout<<ptr1;
    // cout<<sizeof(ptr)<<endl; //4
    // cout<<sizeof(ptr1)<<endl;//4


    //Array
    int arr[5] = {1,2,3,4,5};
    // cout<<&arr[0]<<endl;
    // cout<<&arr[1]<<endl;

    // int *ptr2 = &arr[0];
    // cout<<ptr2<<endl;
    // cout<<*ptr2<<endl;

    // cout<<arr<<endl; //Print the address of 0th index
    // cout<<arr+1<<endl; //Print the address of 1st index

    //Printing values of arr with help of address
    for(int i=0; i<5; i++)
        cout<<*(arr + i)<<endl;

    //Printing all the address of arr
    for(int i=0; i<5; i++)
        cout<<(arr + i)<<endl;
    return 0;
}