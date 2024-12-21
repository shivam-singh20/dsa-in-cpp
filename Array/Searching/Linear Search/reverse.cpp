// #include <iostream>
// using namespace std;

// int main (){
    
//     for(int i=9;i>=0;i--){
//         cout<<arr[i] <<" ";
       
//     }

//     return 0;
// }


// Asli Method
#include <iostream>
using namespace std;

int main(){
    int arr[9]={25,23,65,24,12,11,13,34,67},start=0,end=8;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<9;i++)
    cout<<arr[i]<<" ";

    return 0;
}