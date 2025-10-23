/*
=============================================
 Name: L6T2_2530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/
#include<stdio.h>

int main() {
    int n, sum_even = 0, sum_odd = 0, diff = 0;
    int i;
    
    printf("Input an integer: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Warning! You should input a positive integer.\n");
        return 0;
    }
    
    // Calculate sums
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum_even += i;  // Even number
        } else {
            sum_odd += i;   // Odd number
        }
    }
    
    diff = sum_even - sum_odd;
    
    printf("sum_even is %d, sum_odd is %d, diff is %d.\n", 
           sum_even, sum_odd, diff);
    
    return 0;
}