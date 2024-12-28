#include <iostream>
using namespace std;

int main (){
    int arr[1000],n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   for (int size = 1; size <= n; size++) {
        cout << size << " size subarray is: ";
        for (int i = 0; i <= n - size; i++) {
            cout << "[";
            for (int j = 0; j < size; j++) {
                cout << arr[i + j];
                if (j < size - 1) {
                    cout << ",";
                }
            }
            cout << "] ";
        }
        cout << endl;
    }
    return 0;
}