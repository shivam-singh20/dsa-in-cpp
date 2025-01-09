#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> spiral(vector<vector<int>> matrix) {

        vector<int> ans;

        int row = matrix.size(), col = matrix[0].size();

        int top = 0, right = col - 1, bottom = row - 1, left = 0;

        while (top <= bottom && left <= right) {

            // Printing top
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++;

            // Printing right
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // Printing bottom
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            // Printing left
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }

int main ()
{
    int row = 0, col = 0;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter columns: ";
    cin >> col;

    vector<vector<int>> matrix(row,vector<int>(col));

    cout << "Enter elements of rows and columns: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

   vector<int> result = spiral(matrix);

    cout << "Spiral Order: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
