#include <iostream>
using namespace std;

//Applying ascending order in bubble sort
void bubble_asc(int arr[], int n)
{
    for(int i=n-2; i>=0; i--)
    {
        bool if_sorted = 0;
        for(int j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                if_sorted = 1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(if_sorted == 0)
            break;
    }

    cout << "Sorted in ascending order: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

//Applying descending order in bubble sort
void bubble_desc(int arr[], int n)
{
    for(int i=n-2; i>=0; i--)
    {
        bool if_sorted = 0;
        for(int j=0; j<=i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                if_sorted = 1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(if_sorted == 0)
            break;
    }

    cout << "Sorted in descending order: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
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

    //Concept in bubble sorting
    // for(int i=0; i<n-1; i++)
    // {
    //     if(arr[i]>arr[i+1])
    //     {
    //         swap(arr[i],arr[i+1]);
    //     }
    // }

    bubble_asc(arr,n);
    cout<<endl;
    bubble_desc(arr,n);
    return 0;
}