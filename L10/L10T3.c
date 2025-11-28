/*
=============================================
 Name: L10T3.c
 Author: Sarzn
 Version:
 Copyright: 
 Description: 
 ============================================= 
 */

#include <stdio.h>

int main()
{
    char str1[51], str2[51];
    int i, j, k;
    int found = 0;
    int position = -1;
    printf("Input 2 strings: ");
    scanf("%50s %50s", str1, str2); //input
    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = i, k = 0; str2[k] != '\0' && str1[j] == str2[k]; j++, k++)
        {            // Continue comparing        
        }
        if (str2[k] == '\0')
        {
            found = 1;
            position = i;
            break;
        }
    }
    if (found)
    {
        printf("str1 contains str2 at position %d\n", position); //output
    }
    else
    {
        printf("str1 does not contain str2\n");
    }
   
    return 0;
}