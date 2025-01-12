#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//For T.C - O(n2) and S.C - O(n2)
void Rotate_by_90(vector<vector<int>>matrix, int n) {
    vector<vector<int>> ans(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            ans[j][n-1-i] = matrix[i][j];
        }
    }
    cout<<"Rotated matrix by 90 is:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
 
int main (){
    int n;
    cout<<"Enter size of square matrix: ";
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    cout<<"Enter elements of rows and columns:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>matrix[i][j];
    }
    Rotate_by_90(matrix,n);
    return 0;
}  