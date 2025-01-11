#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Snake_Pattern(vector<vector<int>> matrix,int n){
    vector<int>ans;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<n; j++)
                ans.push_back(matrix[i][j]);
        }
        else{
            for(int j=n-1; j>=0; j--)
                ans.push_back(matrix[i][j]);
        }
    }
    return ans;
}
  
int main (){
    int n;
    
    cout<<"Enter size of the matrix: ";
    cin>>n;

    vector<vector<int>> matrix(n,vector<int>(n));

    cout << "Enter elements of rows and columns: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<int> result=Snake_Pattern(matrix,n);

    // Print the result
    cout << "Snake Pattern Traversal: ";
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}