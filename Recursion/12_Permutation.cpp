#include <bits/stdc++.h>
using namespace std;

// T.C - O(n!), S.C - O(n)

void Finding_Permutation(vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
{
    if (temp.size() == visited.size())
    {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == 0)
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            Finding_Permutation(arr, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter numbers: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(n, 0);

    Finding_Permutation(arr, ans, temp, visited);

    cout << "All possible ways to arrange the array are:\n";
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}