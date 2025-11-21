/*
=============================================
 Name: L9T4v530026271.c
 Author: 
 Version: 
 Copyright: 
 Description: 
 =============================================
*/
#include<stdio.h>

// Recursive function to calculate sum from 1 to maxNum
int sumAll(int maxNum) {
    // Base case: when maxNum is 1, return 1
    if (maxNum == 1) {
        return 1;
    }
    // Recursive case: sumAll(maxNum) = maxNum + sumAll(maxNum-1)
    else {
        return maxNum + sumAll(maxNum - 1);
    }
}

int main() {
    int maxNum;
    
    // Prompt user for input
    printf("Input maxNum: ");
    scanf("%d", &maxNum);
    
    // Check if input is valid
    if (maxNum < 1) {
        printf("Warning! Input of maxNum is invalid!\n");
    } else {
        // Calculate and display the result
        int result = sumAll(maxNum);
        printf("Sum is %d.\n", result);
    }
    
    return 0;
}
