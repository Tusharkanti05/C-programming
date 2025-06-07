#include <stdio.h>
void dsc_inc(int);
void dsc_inc(int n) {
    if(n == 0) return;
    printf("%d\n", n);
    dsc_inc(n-1);
    printf("%d\n", n);
    return;
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    dsc_inc(n);
    return 0;
}