#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int On2(vector<int> arr, int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int prefix_sum = 0;
        for (int j = i; j < n; j++)
        {
            prefix_sum += arr[j];
            maxi = max(maxi, prefix_sum);
        }
    }
    return maxi;
}

// Kadanes algorithm
int On(vector<int> arr, int n)
{
    int maxi = INT_MIN, prefix_sum = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if (prefix_sum < 0)
            prefix_sum = 0;
        maxi = max(maxi, prefix_sum);
    }
    return maxi;
}

int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout<<"Enter elements in the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Largest sum in contiguous subarray is: " << On2(arr, n);
    cout << "\nLargest sum in contiguous subarray is: " << On(arr, n);

    return 0;
}