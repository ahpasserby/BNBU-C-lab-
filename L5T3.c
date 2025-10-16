/*
=============================================
 Name: L5T3.c
 Author: v530026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>

int main() {
    float a, b, c;
    

    printf("Please input the 3 lengths of edges: ");
    scanf("%f %f %f", &a, &b, &c);
    

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Warning!\n");
    } else {
        if (a + b > c && a + c > b && b + c > a) {
            printf("%.0f, %.0f, %.0f can form a triangle!\n", a, b, c);
        } else {
            printf("%.0f, %.0f, %.0f cannot form a triangle!\n", a, b, c);
        }
    }
    
    return 0;
}