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
    //print a pyramid pattern of stars
    for (int i = 0; i < 6; i++) {
        //print leading spaces and stars
        for (int j = 0; j < 11; j++)
        //condition to print star or space
            putchar(j >= 5-i && j <= 5+i ? '*' : ' ');
        putchar('\n');
    }
    return 0;
}