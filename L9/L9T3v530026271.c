/*
=============================================
 Name: L9T3v530026271.c
 Author: 
 Version: 
 Copyright: 
 Description: 
 =============================================
*/
#include<stdio.h>

// Recursive function to calculate m^n
int PowerRec(int m, int n) {
    // Base case: any number to the power of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: m^n = m * m^(n-1)
    else {
        return m * PowerRec(m, n - 1);
    }
}

// Function to calculate m^n using loop
int PowerLoop(int m, int n) {
    int result = 1;
    
    // Multiply m by itself n times
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    
    return result;
}

int main() {
    int m, n;
    
    // Prompt user for input
    printf("Input m and n: ");
    scanf("%d%d", &m, &n);
    
    // Check if inputs are valid
    if (m <= 0) {
        printf("Warning! Input of m is invalid!\n");
    } else if (n < 0) {
        printf("Warning! Input of n is invalid!\n");
    } else {
        // Calculate using both methods and display results
        int resultRec = PowerRec(m, n);
        int resultLoop = PowerLoop(m, n);
        printf("Product is %d using recursion.\n", resultRec);
        printf("Product is %d using loop.\n", resultLoop);
    }
    
    return 0;
}
