#include <stdio.h>

int main() {
    int i, j, num, count, s, p, n1, r;
    printf("Enter number: ");
    scanf("%d", &num);
    n1 = num;

    for (i = num, count = 0; i > 0; count++, i /= 10);
    s = 0;

    while (n1 > 0) {
        r = n1 % 10;
        p = 1;
        for (j = 1; j <= count; j++) {
            p *= r;
        }
        s += p;
        n1 /= 10;
    }

    if (num == s) {
        printf("Armstrong number\n");
    } else {
        printf("Not\n");
    }

    return 0;
}