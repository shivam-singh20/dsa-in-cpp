#include <climits>
#include <iostream>
using namespace std;
int main (){
    int arr[5]={2,45,33,1,5};
// Minimum numbers in an array
    int ans=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }
    cout<<"Minimum value is "<< ans << endl;
//Maximum numbers in an array
    int min=INT_MIN;
     for(int j=0;j<5;j++)
    {
        if(arr[j]>min)
        min = arr[j];
    }
    cout<<"Maximum value is "<< min;

    return 0;
}