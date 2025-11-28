/*
=============================================
 Name: L10T4.c
 Author: Sarzn
 Version:
 Copyright: 
 Description: 
 ============================================= 
 */
#include <stdio.h>
int stringLength(char s[]) //function
{
    int length = 0;    while (s[length] != '\0')
    {
        length++;
    }    return length; //return len
}
int main()
{
    char str[51];
    printf("Input a string: "); //input
    scanf("%50s", str);
    int len = stringLength(str);
    printf("The length of the string is %d.\n", len);
    return 0;
}