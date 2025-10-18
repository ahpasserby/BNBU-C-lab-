/*
=============================================
 Name: A1T4v530026271.c
 Author: v530026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>

int main() {
    int code;
    int ascii_value;
    char letter;
    
    
    printf("Input: ");
    scanf("%d", &code);
    
    
    ascii_value = (code - 5) / 7;
    
    
    if ((ascii_value >= 65 && ascii_value <= 90) || (ascii_value >= 97 && ascii_value <= 122)) {
       
        if ((code - 5) % 7 == 0) {
            letter = (char)ascii_value;
            printf("Output: %c\n", letter);
        } else {
            printf("Cannot convert to a letter\n");
        }
    } else {
        printf("Cannot convert to a letter\n");
    }
    
    return 0;
}