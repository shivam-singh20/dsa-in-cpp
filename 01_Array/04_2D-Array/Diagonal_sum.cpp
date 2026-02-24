#include <bits/stdc++.h>
using namespace std;

void diagonal_sum(int arr[][10], int row, int col)
{
    int diagonal_sum1 = 0, diagonal_sum2 = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                diagonal_sum1 += arr[i][j];
            }
        }
    }
    cout << "Diagonal Sum1 = " << diagonal_sum1 << endl;
    int i = 0, j = col - 1;
    while (j >= 0)
    {
        diagonal_sum2 += arr[i][j];
        i++, j--;
    }
    cout << "Diagonal Sum2 = " << diagonal_sum2;
}

int main()
{
    int row = 0, col = 0;
    cout << "Enter size of row: ";
    cin >> row;
    cout << "Enter size of column: ";
    cin >> col;

    cout << "Enter your matrix:\n";
    int arr[10][10];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    cout << "Your matrix is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    diagonal_sum(arr, row, col);
}