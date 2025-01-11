#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Snake_Pattern(vector<vector<int>> matrix){
    vector<int>ans;
    int row = matrix.size(), col = matrix[0].size();
    int start=0, end=row-1;

    while(start<=end){
        for(int i=0; i<=end; i++)
            ans.push_back(matrix[start][i]);
        start++;
        for(int j=end; j>=0; j--)
            ans.push_back(matrix[start][j]);
    }
}

int main (){
    int row = 0, col = 0;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;

    vector<vector<int>> matrix(row,vector<int>(col));

    cout << "Enter elements of rows and columns: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    return 0;
}