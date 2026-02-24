#include <iostream>
#include <climits>
// #include <cmath>
using namespace std;

int main (){
    int arr[10]={25,23,0,24,12,11,13,34,67,22},ans=INT_MIN;
    for(int i=0;i<10;i++){
        if(arr[i]>ans)
        ans= arr[i];
    }
    cout<<"Maximum number is "<<ans<<endl;

    int second=INT_MIN;

     for(int i=0;i<10;i++){
        if(ans!=arr[i]){
            second=max(second,arr[i]);
        }
     };
    cout<<"Second maximum number is "<<second;


    return 0;
}