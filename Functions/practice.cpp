#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row=0,col=0;
    cout<<"Enter size of row: ";
    cin>>row;
    cout<<"Enter size of column: ";
    cin>>col;

    cout<<"Enter your matrix:\n";
    int arr[10][10];
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            cin>>arr[i][j];
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
            cout<<endl;
    }
    
    for(int i=0; i<row; i++)
    {
        int col_sum = 0;
        for(int j=0; j<col; j++)
        {
            col_sum += arr[j][i];
        }
        cout<<col_sum<<" ";
    }
    return 0;
}