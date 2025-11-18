/*
=============================================
 Name: A1T2v530026271.c
 Author: v530026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>

int main() {
    int num, reversed;
    
    scanf("%d", &num);
    
    reversed = (num % 10) * 10 + (num / 10);
    
    printf("reversed number: %d\n", reversed);
    
    return 0;
}