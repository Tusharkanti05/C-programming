#include <stdio.h>
void ased(int);
void ased(int n) {
    if(n == 0) return;
    ased(n-1);
    printf("%d\t",n);
    return;
}

int main() {
    int n;
    printf("Enter ending value : ");
    scanf("%d", &n);
    ased(n);
    return 0;
}