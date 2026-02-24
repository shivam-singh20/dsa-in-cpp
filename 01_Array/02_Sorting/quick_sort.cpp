#include <bits/stdc++.h>
using namespace std;

//When array is not sorted either in ascending or in descending order then T.C - O(nlogn) S.C - O(n)

//When array is sorted either in ascending or in descending order then T.C - O(n2) S.C - O(n)

int partition(vector<int> &arr, int low, int high)
{
    // code here
    int pos = low;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] <= arr[high])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}

void quickSort(vector<int> &arr, int low, int high)
{
    // code here
    if (low >= high)
        return;

    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot, high);
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

    int start = 0, end = arr.size() - 1;
    quickSort(arr, start, end);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}