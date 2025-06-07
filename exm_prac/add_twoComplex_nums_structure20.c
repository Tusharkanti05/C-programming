#include <stdio.h>

// Define the struct before using it
typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex, complex); // prototype

// Function to add two complex numbers
complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

int main() {
    complex n1, n2, result;

    // Input for the first complex number
    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f%f", &n1.real, &n1.imag);

    // Input for the second complex number
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f%f", &n2.real, &n2.imag);

    // Calculate the sum of the two complex numbers
    result = add(n1, n2);

    // Print the result
    printf("Sum = %.1f + %.1fi\n", result.real, result.imag);

    return 0;
}
