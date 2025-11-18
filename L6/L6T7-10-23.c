/*
=============================================
 Name: L6T7_2530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include<stdio.h>

int main() {
    int n, i;
    int isPrime = 1;  // Assume number is prime initially
    
    printf("Input a positive integer: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Warning! You should input a positive integer.\n");
        return 0;
    }
    
    // Check for prime number
    if (n == 1) {
        isPrime = 0;  // 1 is not a prime number
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;  // Found a divisor, not prime
                break;
            }
        }
    }
    
    // Output result
    if (isPrime) {
        printf("%d is a prime.\n", n);
    } else {
        printf("%d is not a prime.\n", n);
    }
    
    return 0;
}