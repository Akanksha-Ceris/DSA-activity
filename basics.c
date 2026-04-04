
#include <stdio.h>

void findDuplicates(int arr[], int n) {
    printf("Duplicate elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break; // Exit the inner loop to avoid multiple prints for the same duplicate
            }
        }
    }
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print duplicates
    findDuplicates(arr, n);

    return 0;
}
