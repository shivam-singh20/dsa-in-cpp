#include <iostream>
using namespace std;
int Book_Allocation(int arr[], int n, int n_students)
{
    if (n_students > n)
    {
        return -1;
    }
    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < n; i++)
    {
        start = max(start, arr[i]);
        end = end + arr[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int pages = 0, count = 1;

        for (int i = 0; i < n; i++)
        {
            pages = pages + arr[i];

            if (pages > mid)
            {
                count++;
                pages = arr[i];
            }
        }
        if (count <= n_students)
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
    int arr[1000], n, n_students;
    cout << "Enter number of books: ";
    cin >> n;
    cout << "Enter number of pages present in different books:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number of students: ";
    cin >> n_students;

    cout << "Therefore the minimum of the cases is " << Book_Allocation(arr, n, n_students);

    return 0;
}