#include <iostream>
#include <climits>
using namespace std;

int main (){
    int arr[1000], n;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi=INT_MIN,prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        maxi=max(prefix,maxi);
        if(prefix<0)
            prefix=0;
    }
    cout<<"Maximum sum of subarray is: "<<maxi;
    return 0;
}