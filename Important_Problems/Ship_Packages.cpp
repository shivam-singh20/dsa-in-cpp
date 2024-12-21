#include <iostream>
using namespace std;

int Ship_Packages(int arr[], int n, int n_days)
{
    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < n; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int packages_weights = 0, count = 1;
        for (int i = 0; i < n; i++)
        {
            packages_weights += arr[i];
            if (packages_weights > mid)
            {
                count++;
                packages_weights = arr[i];
            }
        }
        if (count <= n_days)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}

int main()
{
    int arr[1000], n, n_days;
    cout << "Enter number of packages: ";
    cin >> n;
    cout << "Enter weights of that packages:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number of days: ";
    cin >> n_days;

    cout << "Therefore minimum days required to ship the packages are " << Ship_Packages(arr, n, n_days) << " days";

    return 0;
}