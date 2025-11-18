/*
=============================================
 Name: L5T2.c
 Author: v530026271
 Version: 1.0
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Input an integer n: ");
    scanf("%d", &n);
    if(n < 0)
    {
    }
    else
    {
        n = -n;
    }
    n = n * 2;
    printf("The final value of n is %d\n", n);
    return 0;
}