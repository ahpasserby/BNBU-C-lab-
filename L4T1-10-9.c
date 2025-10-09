/*
=============================================
 Name: L4T1_v530026271.c
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
    
    printf("%d + %d = %d\n", m, n, m + n);
    printf("%d - %d = %d\n", m, n, m - n);
    printf("%d * %d = %d\n", m, n, m * n);
    printf("%d / %d = %d\n", m, n, m / n);
    printf("%d %% %d = %d\n", m, n, m % n);
    printf("float(%d) / %d = %f\n", m, n, (float)m / n);
    
    return 0;
}