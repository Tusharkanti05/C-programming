#include <stdio.h>
void prime(int);
void prime(int n) {
    int i, f = 0;
    if (n == 1) {
        printf("Not prime");
    } else if (n < 1) {
        printf("Enter positive value !!");
    } else {
        for(i = 2; i<n/2 && f==0; i++) {
            if (n % 2 == 0) {
            f = 1;
            }
        }

        if (f == 0) {
            printf("prime number\n");
        } else {
            printf("Not prime\n");
        }
    }
}

void main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    prime(n);
}