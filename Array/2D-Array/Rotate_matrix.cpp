#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//For T.C - O(n2) and S.C - O(1)
void Rotate_by_90(vector<vector<int>>matrix, int n){
    //First transpose the matrix
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //For 90 degree rotation reverse row
    for(int i=0; i<n; i++){
        int start=0, end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }

    cout<<"Rotated matrix by 90 degree is:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

//Rotating matrix by 180 degree
void Rotate_by_180(vector<vector<int>>matrix, int n){
     //Reverse row
     for(int i=0;i<n;i++){
        int start=0, end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
     }
     //Reverse column
     for(int j=0; j<n; j++){
        int start=0, end=n-1;
        while(start<end){
            swap(matrix[start][j],matrix[end][j]);
            start++;
            end--;
        }
    
     }

    cout<<"Rotated matrix by 180 degree is:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

//Rotating matrix by 270 degree
void Rotate_by_270(vector<vector<int>>matrix, int n){
    //Transpose matrix
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //Column reverse
    for(int j=0; j<n; j++){
        int start=0, end=n-1;
        while(start<end){
            swap(matrix[start][j],matrix[end][j]);
            start++;
            end--;
        }
    }

    cout<<"Rotated matrix by 270 degree is:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

//For T.C - O(n2) and S.C - O(n2)
void ORotate_by_90(vector<vector<int>>matrix, int n) {
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
    
    cout<<"Given matrix is:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    Rotate_by_90(matrix,n);
    Rotate_by_180(matrix,n);
    Rotate_by_270(matrix,n);
    return 0;
}  