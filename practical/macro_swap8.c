#include <stdio.h>

#define SWAP(a, b) { int temp = a; a = b; b = temp; }

int main() {
    int x, y;

    // Input values
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Using the SWAP macro
    SWAP(x, y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}