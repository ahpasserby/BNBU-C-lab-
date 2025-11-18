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

//function to calculate base^exp
long long power(int base, int exp) {
    long long result = 1;
    while (exp--) result *= base;
    return result;
}

int main() {
    int n;
	//get input from user
    printf("Input: ");
    scanf("%d", &n);
    
    //use founction which created to calculate 3^n + 5^n
    long long result = power(3, n) + power(5, n);
    printf("Output: %lld\n", result);
    
    return 0;
}