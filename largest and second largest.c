#include <stdio.h>
#include <stdlib.h>

void findLargestAndSecondLargest(int *arr, int size) {
    int largest = arr[0];
    int second_largest = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", second_largest);
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findLargestAndSecondLargest(arr, size);

    free(arr); // Free dynamically allocated memory
    return 0;
}
