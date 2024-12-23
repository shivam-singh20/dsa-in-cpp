#include <iostream>
using namespace std;

void right_rotateArray(int arr[], int n, int d) {
    d = d % n; // Handle cases where d > n
    int temp[d];
    
    // Step 1: Store the last d elements in the temp array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    
    // Step 2: Shift the rest of the array to the right
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    
    // Step 3: Copy the elements from temp to the start of the array
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}



int main (){
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
    right_rotateArray(arr, n, d);

    // Display the rotated array
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}