/*
=============================================
 Name: A1T3v530026271.c
 Author: v530026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>

int main() {
    double euro_amount;
    int choice;
    
    const double EURO_TO_HKD = 8.1;
    const double EURO_TO_RMB = 7.2;
    
    printf("Please input amount in Euro:");
    scanf("%lf", &euro_amount);
    
    
    printf("Please choose the currency converting to (1: HK dollar, 2: RMB): ");
    scanf("%d", &choice);
    
    
    if (choice == 1) 
    {

        printf("%.2lf euro=%.2lf HK dollar\n", euro_amount, euro_amount * EURO_TO_HKD);
    } 
    else if (choice == 2) 
    {
        
        printf("%.2lf euro=%.2lf RMB\n", euro_amount, euro_amount * EURO_TO_RMB);
    }
    
    return 0;
}