/*
=============================================
 Name: L5T4.c
 Author: v530026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/
#include <stdio.h>
int main()
{
    int height = 0;
    int weight = 0;
    printf("Input height(cm, >0) and weight(kilo, >0): ");
    scanf("%d %d", &height, &weight);
    if((height - 105) > (weight + 20))
    {
        printf("You are too slim\n");
    }
    else if((weight - 10) < (height - 105)&&(height - 105) <= (weight + 20))
    {
        printf("You are fit\n");
    }
    else
    {
        printf("You are too fat\n");
    }
    return 0;
}