/*
=============================================
 Name: L5T5.c
 Author: v530026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>

int main() {
    char grade;
    

    printf("Enter a letter grade: ");
    scanf(" %c", &grade);  
    

    switch(grade) {
        case 'A':
        case 'a':
            printf("4.00\n");
            break;
        case 'B':
        case 'b':
            printf("3.00\n");
            break;
        case 'C':
        case 'c':
            printf("2.00\n");
            break;
        case 'D':
        case 'd':
            printf("1.00\n");
            break;
        case 'F':
        case 'f':
            printf("0.00\n");
            break;
        default:
            printf("warning!\n");
            break;
    }
    
    return 0;
}