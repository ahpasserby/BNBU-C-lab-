#include <stdio.h>

// Function prototype: finds and returns the biggest value in the array without modifying the array
float exchange(float a[], int n);

int main() {
    // Initialize the array with given values
    float data[4] = {2.5, 1, 1.2, 5.2};
    int i;

    // Call the exchange function to find the biggest element
    float biggest = exchange(data, 4);

    // Print the biggest element
    printf("The biggest element in the array is %.2f\n", biggest);

    // Print the array (unchanged)
    for (i = 0; i <= 3; i++)
        printf("%.2f ", data[i]);
    printf("%.2f\n", data[3]);

    return 0;
}

// Function to find the maximum value in the array without changing the array
float exchange(float a[], int n) {
    // Initialize max with the first element
    float max = a[0];
    // Loop through the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    // Return the maximum value
    return max;
}
