#include <iostream>
using namespace std;

int First_Position(int arr[], int n, int target)
{

    int start = 0, end = n - 1, first = -1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return first;
}

int Last_Position(int arr[], int n, int target)
{

    int start = 0, end = n - 1, last = -1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return last;
}

int main()
{
    int n, arr[1000], target;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter number in sorted order:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search for its position: ";
    cin >> target;

    cout << "Number is present from " << First_Position(arr, n, target) << " index " << "to " << Last_Position(arr, n, target) << " index.";

    return 0;
}