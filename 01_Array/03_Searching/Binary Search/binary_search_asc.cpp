#include <iostream>
using namespace std;

int BinarySearch(int a[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            return mid;
            break;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, arr[1000], key;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter number in ascending order:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search for: ";
    cin >> key;

    cout << "Number is present on " << BinarySearch(arr, n, key) << " index.";

    return 0;
}