/*
=============================================
 Name: c
 Author: Sarzn
 Version:
 Copyright: 
 Description: 
 ============================================= 
 */

 #include <stdio.h>

int main() {
    int numbers[100];  // Array to store positive numbers
    int count = 0;     // Count of positive numbers
    int input;
    
    printf("Enter numbers (end with -1):\n");
    
    // Read numbers until -1 is entered
    while (1) {
        scanf("%d", &input);
        
        if (input == -1) {
            break;  // End of input
        }
        
        // Discard negative numbers and zero
        if (input > 0) {
            numbers[count] = input;
            count++;
        }
    }
    
    // Sort the array in ascending order (using bubble sort)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
    // Print the sorted positive numbers
    printf("\nSorted positive numbers:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}