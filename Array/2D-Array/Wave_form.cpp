#include <iostream>
using namespace std;

int main (){
     int row = 0, col = 0;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;
    int arr[row][col];
    cout << "Enter elements of rows and columns: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
        cout<<endl;
    }

    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++)
                cout<<arr[i][j]<<endl;
        }
        else{
            for(int i=row-1;i>=0;i--)
                cout<<arr[i][j]<<endl;
        }
    }
    return 0;
}