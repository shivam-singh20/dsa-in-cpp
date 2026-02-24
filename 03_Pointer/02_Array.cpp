#include <bits/stdc++.h>
using namespace std;

int main (){
    //Array
    int arr[5] = {1,2,3,4,5};
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;

    int *ptr2 = &arr[0];
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;

    cout<<arr<<endl; //Print the address of 0th index
    cout<<arr+1<<endl; //Print the address of 1st index

    //Printing values of arr with help of address
    for(int i=0; i<5; i++)
        cout<<*(arr + i)<<endl;

    //Printing all the address of arr
    for(int i=0; i<5; i++)
        cout<<(arr + i)<<endl;

    int *ptr3 = arr;

    // Performing Arithmetic operations
    // ptr3 = ptr3 + 2;
    // cout<<ptr3<<endl;
    // ptr3 = ptr3 - 1;
    // cout<<ptr3<<endl;

    // for(int i=0; i<5; i++)
    // {
    //     cout<<*ptr3<<endl;
    //     ptr3++;
    // }

    ptr3 = ptr3 + 4;
    for(int i=5; i>0; i--)
    {
        cout<<*ptr3<<endl;
        ptr3--;
    }
    return 0;
}