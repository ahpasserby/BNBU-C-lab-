/*
=============================================
 Name: L7T2.c
 Author: 253026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>
#define ARRAY_SIZE 50  // Maximum array size

int main() {
    int arr[ARRAY_SIZE];  // Array to store numbers
    int count = 0;        // Count of actual elements
    int search_num;       // Number to search for
    int found = -1;       // Index where number is found, -1 means not found
    
    // Read array elements
    printf("Please input a sequence of integers (end with -1): ");
    
    int num;
    while (1) {
        scanf("%d", &num);
        
        if (num == -1) {
            break;  // Stop reading when -1 is encountered
        }
        
        if (count < ARRAY_SIZE) {
            arr[count] = num;
            count++;
        } else {
            printf("Array is full!\n");
            break;
        }
    }
    
    // Check if array is empty
    if (count == 0) {
        printf("Array is empty.\n");
    } else {
        // Get number to search for
        printf("Enter the number you want to search: ");
        scanf("%d", &search_num);
        
        // Search for the number in array
        for (int i = 0; i < count; i++) {
            if (arr[i] == search_num) {
                found = i;  // Store index where number is found
                break;      // Stop at first occurrence
            }
        }
        
        // Display result
        if (found != -1) {
            printf("The index of %d in the array is %d.\n", search_num, found);
        } else {
            printf("%d Not found.\n", search_num);
        }
    }
    
    return 0;
}