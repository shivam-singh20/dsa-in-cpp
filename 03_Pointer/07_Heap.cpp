#include <bits/stdc++.h>
using namespace std;

int main (){
    //Allocating heap memory for a variable
    int *ptr = new int;

    float *ptr1 = new float;

    *ptr = 10;
    cout<<ptr<<endl; //Prints the address of ptr from heap 
    cout<<*ptr<<endl; //Print the value present in that address

    *ptr1 = 3.14;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;

    //Array
    int *p = new int[10];
    // for(int i=0; i<10; i++)
    //     cin>>p[i];
    // cout<<"Values are: "<<endl;
    // for(int i=0; i<10; i++)
    //     cout<<p[i]<<" ";

    cout<<endl;

    cout<<p<<endl; //Address of p

    //Deleting all the memory in heap
    delete ptr;
    delete ptr1;
    delete[] p; //delete array from heap
    return 0;
}