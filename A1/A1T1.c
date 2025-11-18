/*
=============================================
 Name: A1T1v530026271.c
 Author: v530026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>

int main() {
    char ch;
    
    
    scanf("%c", &ch);
    
    
    if (ch >= '0' && ch <= '9') {
        printf("It is a digit!\n");
    }
    
    else if ((ch >= 'A' && ch <= 'Z')) {
        printf("It is an English letter!\n");
    }
    
    else if ((ch >= 'a' && ch <= 'z')) {
        printf("It is an English letter!\n");
    }
    
    else {
        printf("It is other character!\n");
    }
    
    return 0;
}