#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int *arr;
    int product_even = 1, product_odd = 1;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
     arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            product_even *= arr[i]; // Multiply even elements
        } else {
            product_odd *= arr[i];  // Multiply odd elements
        }
    }

    printf("Product of even elements: %d\n", product_even);
    printf("Product of odd elements: %d\n", product_odd);

    // Free dynamically allocated memory
    free(arr);
    return 0;
}
