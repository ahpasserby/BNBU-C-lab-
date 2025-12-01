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

// Recursive function to generate Fibonacci sequence
void generateFibonacci(int a0, int a1, int count) {
    static int current = 0;  // Track which number we're printing
    
    // Base cases
    if (count == 0) {
        return;
    }
    
    if (current == 0) {
        printf("%d ", a0);
        current++;
        generateFibonacci(a0, a1, count - 1);
    } else if (current == 1) {
        printf("%d ", a1);
        current++;
        generateFibonacci(a0, a1, count - 1);
    } else {
        int next = a0 + a1;
        printf("%d ", next);
        generateFibonacci(a1, next, count - 1);
    }
}
// Main function
int main() {
    int a0, a1;
    
    printf("Input: ");
    scanf("%d %d", &a0, &a1);
    
    printf("Output: ");
    generateFibonacci(a0, a1, 20);
    printf("\n");
    
    return 0;
}