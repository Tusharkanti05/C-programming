#include <stdio.h>
int main() {
    int i, j, k = 4;
    for(i=1; i<=k; i++) {
        for(j=0; j<=k-i; j++) {
            printf("%d", k-j);
        }
        printf("\n");
    }
    return 0;
}
/*  4321
    321
    21
    1    */