/*
=============================================
 Name: L4T6_v530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include<stdio.h>

int main(){
    int a, b, bigger;
    
    scanf("%d %d", &a, &b);
    
    bigger = (a > b) ? a : b;
    
    printf("The bigger number is %d\n", bigger);
    
    return 0;
}