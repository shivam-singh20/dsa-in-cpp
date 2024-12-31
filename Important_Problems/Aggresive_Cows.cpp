#include <iostream>
using namespace std;

int Solution(int arr[], int stalls, int cows)
{
    int start = arr[0], end = arr[stalls - 1] - arr[0], mid, ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int count = 1, position = arr[0];
        for (int i = 1; i < stalls; i++)
        {
            if (position + mid <= arr[i])
            {
                count++;
                position = arr[stalls];
            }
        }
        if (count > cows)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return ans;
}

int main()
{
    int arr[1000], stalls, cows;
    cout << "Enter number of stalls: ";
    cin >> stalls;
    cout << "Enter stall numbers:\n";
    for (int i = 0; i < stalls; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number of cows: ";
    cin >> cows;

    cout << "The minimum distance between cows is " << Solution(arr, stalls, cows);

    return 0;
}