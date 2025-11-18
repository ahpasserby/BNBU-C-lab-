/*
=============================================
 Name: L4T5_v530026271.c
 Author: Sarzn
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include<stdio.h>

int main(){
    int m, n;
    
    scanf("%d %d", &m, &n);
    
    printf("Integer: %d divided by %d is %d\n", m, n, m / n);
    
    printf("Float: %d divided by %d is %.2f\n", m, n, (float)m / n);
    
    return 0;
}