#include <stdio.h>
#include <stdlib.h>

double calculateAverage(int *arr, int size) {
    double sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum / size;
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

    double average = calculateAverage(arr, size);

    printf("Average of elements in the array: %.2f\n", average);

    free(arr); // Free dynamically allocated memory
    return 0;
}
