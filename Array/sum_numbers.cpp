#include <iostream>
using namespace std;

int main (){

    int arr[10],num,sum=0;
    cout<<"Enter number of iteration: ";
    cin>>num;

    for(int i=0;i<num;i++)
    cin>>arr[i];

    for(int i=0;i<num;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of given number is " << sum;
    return 0;
}