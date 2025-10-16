/*
=============================================
 Name: L5T2.c
 Author: v530026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>

int main() {
    int n;
    
    printf("Input an integer n: ");
    scanf("%d", &n);
    

    int multipleOf3 = (n % 3 == 0);
    int multipleOf8 = (n % 8 == 0);
    

    if (multipleOf3 && multipleOf8) {
        printf("%d is multiple of both 3 and 8.\n", n);
    } else if (multipleOf3) {
        printf("%d is only multiple of 3.\n", n);
    } else if (multipleOf8) {
        printf("%d is only multiple of 8.\n", n);
    } else {
        printf("%d is not multiple of 3 or 8.\n", n);
    }
    
    return 0;
}