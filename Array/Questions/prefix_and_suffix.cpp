#include <iostream>
#include <vector>
using namespace std;

void Prefix(int arr[], int n)
{
    vector<int> temp(n);
    temp[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        temp[i] = temp[i - 1] + arr[i];
    }
    cout << "Prefix is: ";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

void Suffix(int arr[], int n)
{
    vector<int> temp(n);
    temp[n - 1] = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        temp[i - 1] = temp[i] + arr[i - 1];
    }
    cout << "Suffix is: ";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int arr[1000], n;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Prefix(arr, n);
    cout << "\n";
    Suffix(arr, n);
    return 0;
}