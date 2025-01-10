#include <iostream>
#include <vector>
using namespace std;

//For T.C - O(n2) and S.C - O(n2)


//For T.C - O(n2) and S.C - O(n2)

void trans(int matrix[][10],int row,int col){

    cout<<"Transpose of matrix is:\n";

    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[j][i] = matrix[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main (){
    int row = 0, col = 0;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;

    int matrix[10][10];

    cout << "Enter elements of rows and columns:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout<<"Given matrix is:\n";

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    trans(matrix,row,col);
   
    return 0;
}