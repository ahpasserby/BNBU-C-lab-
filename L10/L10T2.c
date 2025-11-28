/*
=============================================
 Name: L10T2.c
 Author: Sarzn
 Version:
 Copyright: 
 Description: 
 ============================================= 
 */
#include <stdio.h>

int main()
{
    char str[51];
    int upper = 0, lower = 0, space = 0;
    int i = 0, j = 0;
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Original str is %s", str);        // Count and remove spaces in one pass  
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z') //calc big
        {
            upper++;
            str[j++] = str[i];
        }
        else if (str[i] >= 'a' && str[i] <= 'z') //calc small
        {
            lower++;
            str[j++] = str[i];
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
    printf("There are %d upper-case letters, %d lower-case letters, %d spaces totally.\n", upper, lower, space);
    printf("String now is %s", str);
    return 0;
}