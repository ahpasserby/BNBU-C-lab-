/*
=============================================
 Name: L6T4_2530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include<stdio.h>

int main() {
    int i, j;
    
    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for columns (stars)
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // New line after each row
    }
    
    return 0;
}