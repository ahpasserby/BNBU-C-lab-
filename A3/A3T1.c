/*
=============================================
 Name: c
 Author: Sarzn
 Version:
 Copyright: 
 Description: 
 ============================================= 
 */

 #include <stdio.h>

int main() {
    // Initialize a 3x3 matrix with fixed values
    int matrix[3][3] = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0},
    };
    
    printf("The matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Check if the matrix is symmetric
    int isSymmetric = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }
    // Output the result
    if (isSymmetric) {
        printf("This matrix is symmetric.\n");
    } else {
        printf("This matrix is not symmetric.\n");
    }
    
    return 0;
}