#include <iostream>
using namespace std;

int main (){
    int num,arr[10]={25,23,65,24,12,11,13,34,67,98},index=-1;
    cout<<"Enter your number to find: " <<endl;
    cin>>num;
    
    for(int i=0;i<10;i++){
        if(arr[i]==num){
            index=i;
            break;
        }
    }
        cout<<"Number is present on "<<index <<" index";

    return 0;
}