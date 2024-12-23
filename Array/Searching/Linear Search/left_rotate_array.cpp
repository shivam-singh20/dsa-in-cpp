#include <iostream>
using namespace std;

// Function to rotate the array
void rotateArray(int arr[], int n, int d) {
    // Normalize d if it is greater than n
    d = d % n;

    // Create a temporary array to store the first d elements
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }

    // Copy the temporary array back to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n, d;
    
    // Input array size
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the number of positions to rotate
    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    // Rotate the array
    rotateArray(arr, n, d);

    // Display the rotated array
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
