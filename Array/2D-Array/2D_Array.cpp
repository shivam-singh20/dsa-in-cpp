#include <iostream>
using namespace std;

void print_col(int arr[][3],int row,int col){
    for(int j=0;j<col;j++){
        for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
    }
}

int main (){
    //Creating 2D Array
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // Printing the values row wise
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<< " ";
        }
    }
    cout<<endl;

    // Printing the values column wise
    print_col(arr,4,3);
    cout<<endl;

    //Find an element in the array
    int target=99;
     for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                cout<<"Got it!";
                return 0;
            }
        }
    }
    cout<<"Number is not present!";

    return 0;
}   