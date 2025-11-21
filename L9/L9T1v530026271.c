/*
=============================================
 Name: L9T1v530026271.c
 Author: 
 Version: 
 Copyright: 
 Description: 
 =============================================
*/
#include<stdio.h>

// Recursive function to calculate sum of squares from 1 to n
int f(int n) {
    // Base case: when n is 1, return 1^2 = 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: f(n) = n^2 + f(n-1)
    else {
        return n * n + f(n - 1);
    }
}

int main() {
    int n;
    
    // Prompt user for input
    printf("Input a positive integer (>=1): ");
    scanf("%d", &n);
    
    // Check if input is valid
    if (n < 1) {
        printf("Warning! A positive integer no smaller than 1 should be input.\n");
    } else {
        // Calculate and display the result
        int result = f(n);
        printf("Sum is %d when n is %d.\n", result, n);
    }
    
    return 0;
}
