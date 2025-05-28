#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// For T.C - O(n3) and S.C - O(1)
bool n3(vector<int> &arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int num = target - arr[i] - arr[j];
            int start = j + 1, end = n - 1;
            while (start < end)
            {
                if (arr[start] + arr[end] == num)
                    return 1;
                else if (arr[start] + arr[end] < num)
                    start++;
                else
                    end--;
            }
        }
    }
    return 0;
}

// For T.C - O(n4) and S.C - O(1)
bool n4(vector<int> &arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == target)
                        return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int n, target;
    cout << "Enter size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter numbers: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target: ";
    cin >> target;

    // For T.C - O(n4) and S.C - O(1)
    cout << n4(arr, target) << endl;

    // For T.C - O(n3) and S.C - O(1)
    cout << n3(arr, target) << endl;
    return 0;
}