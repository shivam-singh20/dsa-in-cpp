#include <iostream>
using namespace std;

// For T.C - O(n2) and S.C - O(1)
bool n2(int arr[], int n, int target){
    
}

// For T.C - O(n3) and S.C - O(1)
bool On3(int arr[], int n, int target)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                    return 1;
            }
        }
    }
    return 0;
}

// For T.C - O(n2logn) and S.C - O(1)
bool n2logn(int arr[], int n, int target)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            int start = j + 1, end = n - 1, find = target - (arr[i] + arr[j]);
            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                if (arr[mid] == find)
                    return 1;
                else if (arr[mid] < find)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[1000], n, target;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target: ";
    cin >> target;
    cout << On3(arr, n, target) << endl;
    cout << n2logn(arr, n, target);
    return 0;
}