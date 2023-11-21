#include <stdio.h>

int main() {
    int n; // Size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int evenCount = 0, oddCount = 0;

    // Input elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Print the final result
    printf("Total even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);

    return 0;
}
