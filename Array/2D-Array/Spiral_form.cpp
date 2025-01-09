#include <iostream>
using namespace std;

int spiral(int arr[][6],int row,int col){

}

int main ()
{
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
    }
    spiral(arr,row,col);


    return 0;
}