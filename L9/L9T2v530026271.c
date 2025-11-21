/*
=============================================
 Name: L9T2v530026271.c
 Author: 
 Version: 
 Copyright: 
 Description: 
 =============================================
*/
#include<stdio.h>

// Recursive function to count how many m factors are in n
int countFactors(int n, int m) {
    // Base case: if n is not divisible by m, return 0
    if (n % m != 0) {
        return 0;
    }
    // Recursive case: if divisible, count 1 and continue with n/m
    else {
        return 1 + countFactors(n / m, m);
    }
}

int main() {
    int n, m;
    
    // Prompt user for input
    printf("Please input n and m: ");
    scanf("%d%d", &n, &m);
    
    // Check if inputs are valid
    if (n <= 1) {
        printf("Warning! value of n is invalid!\n");
    } else if (m <= 1) {
        printf("Warning! value of m is invalid!\n");
    } else {
        // Calculate and display the result
        int count = countFactors(n, m);
        printf("There are %d %d(s) in %d.\n", count, m, n);
    }
    
    return 0;
}
