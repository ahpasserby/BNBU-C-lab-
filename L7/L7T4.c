/*
=============================================
 Name: L7T4.c
 Author: 253026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;  // Size of array
    
    // Get array size
    printf("Input the size of the array: ");
    scanf("%d", &n);
    
    // Validate array size
    if (n <= 0) {
        printf("Warning! Array size should be positive.\n");
        return 0;
    }
    
    // Create array
    int *arr = (int*)malloc(n * sizeof(int));
    
    // Read array elements
    printf("Input %d integers of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display original array
    printf("The original array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Sort array in ascending order using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Display ascending order
    printf("After sorting, the array in ascending order is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Display descending order (reverse of ascending)
    printf("After sorting, the array in descending order is: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Free allocated memory
    free(arr);
    
    return 0;
}