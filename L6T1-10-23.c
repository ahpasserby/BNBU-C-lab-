/*
=============================================
 Name: L6T1_2530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/
#include<stdio.h>

int main() {
    char ch;
    int count = 0;
    // Output guide line
    printf("Input a line of characters: ");
    
    // Read characters until newline
    do {
        scanf("%c", &ch);
        if (ch == 'c') {
            count++;
        }
    } while (ch != '\n');
    
    //Output conclusion
    printf("There are totally %d 'c'.\n", count);
    
    return 0;
}