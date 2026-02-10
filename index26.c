#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    // Loop continues as long as the search space is valid
    while (low <= high) {
        // Calculate the middle index (using this formula to avoid potential integer overflow)
        int mid = low + (high - low) / 2;

        // Check if the target is present at the middle
        if (arr[mid] == target) {
            return mid; // Element found, return the index
        }
        // If target is greater than the middle element, ignore the left half
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller than the middle element, ignore the right half
        else {
            high = mid - 1;
        }
    }

    return -1; // Element not found, return -1
}

int main() {
    // The array MUST be sorted in ascending order
    int arr[] = {2, 5, 10, 18, 23, 28, 33};
    int target = 18;
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Perform the binary search
    int result = binarySearch(arr, size, target);

    // Print the result
    if (result != -1) {
        printf("Element %d found at index: %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
    