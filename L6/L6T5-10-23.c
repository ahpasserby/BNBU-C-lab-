/*
=============================================
 Name: L6T5_2530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include<stdio.h>

int main() {
    int i, j;
    int patterns[5] = {9, 7, 5, 3, 1};  // Number of characters for each line
    char symbols[5] = {'*', '=', '*', '=', '*'};  // Symbol for each line
    
    // Outer loop for each line
    for (i = 0; i < 5; i++) {
        // Inner loop for printing characters in each line
        for (j = 0; j < patterns[i]; j++) {
            printf("%c", symbols[i]);
        }
        printf("\n");  // Move to next line after printing all characters
    }
    
    return 0;
}