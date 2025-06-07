#include <stdio.h>
void primeR(int, int);
void primeR(int n1, int n2) {
    int i, j;
    if (n1 == 1) {
        n1 = 2;
    } 
    if (n1 < 1) {
        printf("Enter positive value!!");
    }
    for(i = n1; i <= n2; i++) {
        int f = 0;
        for(j = 2; j<i/2 && f == 0; j++) {
            if (i % 2 == 0) {
                f = 1;
            }
        }

        if (f == 0) {
            printf("%d\t", i);
        }
    }
    
}

void main() {
    int st, ed;
    printf("Enter starting value : ");
    scanf("%d", &st);
    printf("Enter ending value : ");
    scanf("%d", &ed);

    primeR(st,ed);
}