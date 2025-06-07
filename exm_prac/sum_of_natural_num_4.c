#include <stdio.h>
int rec(int);

int main() {
    int n;
    printf("Enter terms : ");
    scanf("%d", &n);

    printf("Sum of series is %d\n", rec(n));
    return 0;
}

int rec(int n){
    if (n==1) return 1;
    return n + rec(n-1);
}