#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int row = 0, col = 0;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;
    int arr[row][col];
    cout << "Enter elements of rows and columns: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }

    // Printing row index with maximum sum
    int sum = INT_MIN, index = -1;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
            total += arr[i][j];
        if (sum < total)
        {
            sum = total;
            index = i;
        }
    }
    cout << sum << " " << index <<endl;

    // Printing sum of diagonal elements --To print sum of diagonal elements rows = columns
    int first_sum = 0, second_sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
                first_sum += arr[i][j];
        }
    }
    cout << "First diagonal sum is: " << first_sum << endl;

    int i = 0, j = col - 1;
    while (j >= 0)
    {
        second_sum += arr[i][j];
        i++;
        j--;
    }
    cout << "Second diagonal sum is: " << second_sum;

    return 0;
}