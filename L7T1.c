/*
=============================================
 Name: L7T1.c
 Author: 253026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>
#define STACK_SIZE 5

int main() {
    int stack[STACK_SIZE];
    int top = 0;
    int action, value;
    // Main loop for stack operations
    do {
        printf("Please choose action(1: Push 2: Pop  0: Exit): ");
        scanf("%d", &action);
        // Exit condition
        if (action == 0) {
            printf("Exiting the program\n");
            break;
        }
        // Perform push or pop based on user input
        switch (action) {
            case 1:
                if (top == STACK_SIZE) {
                    printf("Unsuccessful push operation: Stack is full\n");
                } else {
                    printf("Enter an integer to push: ");
                    scanf("%d", &value);
                    stack[top++] = value;
                }
                break;
            case 2:
                if (top == 0) {
                    printf("Unsuccessful pop operation: Stack is empty\n");
                } else {
                    printf("Popped: %d\n", stack[--top]);
                }
                break;
            default:
                continue;
        }
        // Display current stack contents
        printf("----------------------\n");
        printf("| Stack: ");
        for (int i = 0; i < top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n----------------------\n");
    } while (1);

    return 0;
}