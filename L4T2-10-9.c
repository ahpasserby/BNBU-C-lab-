/*
=============================================
 Name: L4T2_v530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/


#include<stdio.h>

#define SQUARE(x) ((x) * (x))

int main(){
    int a, b, square_sum;
    
    
    scanf("%d %d", &a, &b);
    
    
    square_sum = SQUARE(a) + SQUARE(b);
    
    
    printf("Square sum is %d\n", square_sum);
    
    return 0;
}