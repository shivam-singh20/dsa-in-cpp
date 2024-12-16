#include <iostream>
using namespace std;

int Count_function(int arr[], int n, int num)
{
    int start = 0, end = n - 1, mid = 0, count = -1, first_index = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == num)
        {
            first_index = mid;
            end = mid - 1;
        }
        else if (arr[mid] < num)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    start = 0, end = n - 1, mid = 0;
    int last_index = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == num)
        {
            last_index = mid;
            start = mid + 1;
        }
        else if (arr[mid] < num)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    count = (last_index - first_index) + 1;
    return count;
}

int main()
{
    int arr[1000], n, num;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to count: ";
    cin >> num;
    cout << "Count of " << num << " is " << Count_function(arr, n, num);
    return 0;
}