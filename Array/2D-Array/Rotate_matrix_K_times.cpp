#include <iostream>
#include <vector>
using namespace std;

void Rotate_K_Times(vector<vector<int>> &matrix, int n)
{
    // Transpose of matrix
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse row
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

// Function to display matrix
void print_matrix(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, k;
    cout << "Enter size of square matrix: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter elements of rows and columns:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }

    cout << "Enter how many times matrix should be rotated: ";
    cin >> k;

    cout << "Given matrix is:\n";
    print_matrix(matrix, n);

    k = k % 4;
    for (int i = 0; i < k; i++)
    {
        Rotate_K_Times(matrix, n);
    }

    cout << "Matrix after " << k << " rotations:\n";
    print_matrix(matrix, n);

    return 0;
}