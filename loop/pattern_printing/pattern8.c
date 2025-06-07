#include <stdio.h>
int main() {
    int i, j, sp,x, num = 1;
    printf("Enter row : ");
    scanf("%d", &x);
    for(i=1; i<=x; i++) {
        for(sp=1; sp<x-i; sp++){
            printf(" ");
        }
        for(j=1; j<=i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}
/*  1 
 2 3
4 5 6
7 8 9 10  */