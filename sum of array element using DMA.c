#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    //input maagni user sita
    printf("Enter the size of the arrays: ");     
    scanf("%d", &size);
    //malloc le memory allocate grxa ani size of int le inteter ko size herxa bit ma
    int* arr1 = malloc(size * sizeof(int));
    int* arr2 = malloc(size * sizeof(int));
    int* sum = malloc(size * sizeof(int));
    // user sita input mageko
    printf("Enter elements of array 1:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter elements of array 2:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    
    printf("Sum of arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
    // deallocate the memory 
    free(arr1);
    free(arr2);
    free(sum);
    
    return 0;
}
