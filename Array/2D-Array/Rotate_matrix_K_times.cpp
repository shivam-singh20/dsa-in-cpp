#include <iostream>
#include <vector>
using namespace std;

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

    return 0;
}