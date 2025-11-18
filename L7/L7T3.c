/*
=============================================
 Name: L7T3.c
 Author: 253026271
 Version: 
 Copyright: 
 Description: 
=============================================
*/

#include <stdio.h>

int main() {
    int n;  // Total number of letters
    
    // Get total number of letters
    printf("Input the total number of letters: ");
    scanf("%d", &n);
    
    // Validate input
    if (n <= 0) {
        printf("Warning! Total number should be a positive integer!\n");
        return 0;
    }
    
    // Declare array with n as size (Variable Length Array)
    char letters[n + 1];  // +1 for null terminator
    
    // Read ASCII codes and convert to characters
    printf("Input %d ASCII codes: ", n);
    for (int i = 0; i < n; i++) {
        int code;
        scanf("%d", &code);
        
        // Check if ASCII code represents an English letter
        // Uppercase letters: 65-90, Lowercase letters: 97-122
        if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122)) {
            letters[i] = (char)code;  // Convert ASCII to character
        } else {
            printf("Warning! Invalid ASCII code.\n");
            return 0;
        }
    }
    
    letters[n] = '\0';  // Add null terminator to make it a proper string
    
    // Output the string of letters
    printf("%s\n", letters);
    
    return 0;
}