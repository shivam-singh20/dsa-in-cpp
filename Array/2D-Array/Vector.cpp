#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    int row = 0, col = 0;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;

    //Creating 2D Vector
    vector<vector<int>> matrix(row,vector<int>(col,3));
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    cout<<matrix[i][j]<<" ";

    //Printing how many rows are there in the vector
    cout<<endl<<matrix.size()<<endl;

    //Printing how many columns are there in the vector
    cout<<matrix[0].size();

    return 0;
}