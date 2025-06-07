#include <stdio.h>
int sum(int);
int sum(int n) {
    if(n == 0 || n== 1) return n;
    return n + sum(n-1);
}

int main () {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printf("Result is %d", sum(n));
    return 0;
}