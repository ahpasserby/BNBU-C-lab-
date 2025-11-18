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

int main() {
    //find and print all perfect numbers less than 1000
    for (int num = 1; num < 1000; num++) {
        int sum = 0;
        
        // calculate the sum of divisors
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        
        // check if the number is perfect
        if (sum == num) {
            printf("%d = 1", num);
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    printf("+%d", i);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}