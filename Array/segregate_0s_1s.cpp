#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    cout<<"Enter size of the vector: ";
    cin>>n;
    vector<int>values(n);
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>values[i];
    }
    int start=0,end=n-1;
    while(start<=end){
        if(values[start]==0)
            start++;
        else{
            if(values[end]==0){
                swap(values[start],values[end]);
                start++;
                end--;
            }
            else
                end--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<values[i];
    }
    return 0;
}