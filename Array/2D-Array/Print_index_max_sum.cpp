#include <iostream>
#include <climits>
using namespace std;

int main (){
    int row=0,col=0;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter columns: ";
    cin>>col;
    int arr[row][col];
    cout<<"Enter elements of rows and columns: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }
    int sum=INT_MIN,index=0;
    for(int i=0;i<row;i++){
        int total=0;
            for(int j=0;j<col;j++)
                total+=arr[i][j];
        if(sum<total){
            sum=total;
            index=i;
        }
    }
    cout<<sum<<" "<<index;
    return 0;
}