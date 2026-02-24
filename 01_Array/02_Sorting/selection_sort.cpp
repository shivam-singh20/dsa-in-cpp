#include <iostream>
using namespace std;

// Applying selection sort for ascending order

void selection_asc(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // Same as concept code of selection sort
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    cout << "Sorted in ascending order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Applying selection sort for descending order
void selection_desc(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }
    cout << "Sorted in descending order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[1000], n;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter elements of array:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Concept in selection sort
    // int index=0;
    // for(int i=1; i<n; i++)
    // {
    //     if(arr[i]<arr[index])
    //     {
    //         index = i;
    //     }
    // }
    // cout<<"Smallest index at which the value is present is: "<<index;

    selection_asc(arr, n);
    cout << endl;
    selection_desc(arr, n);
    return 0;
}