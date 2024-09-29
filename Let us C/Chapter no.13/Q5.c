#include <stdio.h>

int is_symmetric(int *arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return 0;  // false
        }
    }
    return 1;  // true
}

int main() {
    int n;
    
    // Prompt user for input
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is symmetric
    if (is_symmetric(arr, n)) {
        printf("The array is symmetric.\n");
    } else {
        printf("The array is not symmetric.\n");
    }

    return 0;
}