#include <stdio.h>
int swap(int *x, int *y);
int main() {
    int x, y;
    printf("Enter 1st number(x) : ");
    scanf("%d", &x);
    printf("Enter 2nd number(y) : ");
    scanf("%d", &y);
    swap(&x,&y);
    printf("x = %d\ny = %d", x, y);
    return 0;
}

int swap(int *x, int *y) {
int tmp = *x;
    *x = *y;
    *y = tmp;
}