#include <iostream>
using namespace std;

void print_col(int arr[4][3],int i,int j){
    
}

int main (){
    //Creating 2D Array
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //Printing the values row wise
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<< " ";
        }
    }

    //Printing the values column wise
    print_col(arr,4,3);






    return 0;
}   