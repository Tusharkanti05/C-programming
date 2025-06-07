#include <stdio.h>

void arm(int n) {
    int n1, count = 0, i, remainder, power, sum = 0;
    
    // Count the number of digits
    for (n1 = n; n1 != 0; count++, n1 /= 10);

    n1 = n;
    while (n1 != 0) {
        remainder = n1 % 10;
        power = 1;

        // Compute power (remainder^count)
        for (i = 1; i <= count; i++) {
            power *= remainder;
        }

        sum += power;
        n1 /= 10;
    }

    // Check if the number is Armstrong
    if (sum == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    arm(n);
    return 0;
}
