#include <bits/stdc++.h>
using namespace std;

int main (){

    // Creating 2D Array
    int n;
    cout<<"Enter rows: ";
    cin>>n;

    int m;
    cout<<"Enter col: ";
    cin>>m;
    
    // Step 1: Creating an array that contains address of another array
    int **ptr = new int *[n];

    for(int i=0; i<n; i++)
        ptr[i] = new int [m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>ptr[i][j];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<ptr[i][j]<<" ";
        cout<<endl;
    }   

    // Creating 3D Array
    v
    return 0;
}