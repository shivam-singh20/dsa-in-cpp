#include <iostream>
using namespace std;

int Search_Position(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid, index = n;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            index = mid; // return mid;
            break;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            index = mid;
            end = mid - 1;
        }
    }
    return index;
}

int main()
{
    int n, arr[1000], key;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter number in sorted order:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search for: ";
    cin >> key;

    cout << "Number is or can be present on " << Search_Position(arr, n, key) << " index.";
    return 0;
}