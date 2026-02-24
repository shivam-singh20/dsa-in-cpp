#include <iostream>
#include <vector>
using namespace std;

bool Brute_force(vector<vector<int>> matrix, int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]==target)
                return true;
        }
    }
    return false;
}

// For T.C - O(log(m*n)) and S.C - O(1)
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        for(int i=0; i<m; i++){
            if(matrix[i][0]<=target && target<=matrix[i][n-1]){
                int start=0, end=n-1;
                while(start<=end){
                    int mid = start+(end-start)/2;
                    if(matrix[i][mid]==target)
                        return true;
                    else if(matrix[i][mid]<target)
                        start=mid+1;
                    else
                        end=mid-1;
                }
            }
        }
        return false;
 }

int main (){
    int row = 0, col = 0, target=0;
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

    cout<<"Enter element to search for: ";
    cin>>target;

    cout<<Brute_force(matrix,row,col,target);
    cout<<endl;
    cout<<searchMatrix(matrix,target);

    return 0;
}