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
#include "prime_check.h"

int main() {
    printf("Prime numbers between 5 and 100:\n");
    
    for (int i = 5; i <= 100; i++) {
        if (isPrime(i)) {
            printf("%d is a prime\n", i);
        }
    }
    
    return 0;
}