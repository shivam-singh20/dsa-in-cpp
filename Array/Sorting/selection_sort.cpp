#include <iostream>
using namespace std;

int main()
{
    int arr[1000], n;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter numbers in the array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i <= n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[index])
            {
                swap(arr[j], arr[index]);
            }
        }
        cout << arr[i] << " ";
    }
    cin >> n;
    return 0;
}