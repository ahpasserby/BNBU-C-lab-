/*
=============================================
 Name: 253026271.c
 Author: 
 Version:
 Copyright: 
 Description: 
 ============================================= 
 */

#include <stdio.h>

// Recursive function to perform Collatz conjecture steps
void collatz(int n) {
    if (n == 1) return;
    
	// Print the current step and call collatz recursively
    if (n % 2 == 0) {
        printf("%d/2=%d\n", n, n/2);
        collatz(n/2);
    } 
	//else if n is odd
	else 
	{
        printf("3*%d+1=%d\n", n, 3*n+1);
        collatz(3*n+1);
    }
}

int main() {
    int n;
    printf("Input: ");
    scanf("%d", &n);
    collatz(n);
    return 0;
}