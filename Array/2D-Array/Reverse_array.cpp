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

    cout << "Before reversing:\n";
    // Before reversing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Reversing an array
    for (int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    cout << "Reversed array:\n";
    // After reversing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}