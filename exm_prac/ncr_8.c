#include <stdio.h>
int fac(int);

int fact(int n){
    int f, i;
    for(i=1, f=1; i<=n; i++, f *= i);
    return f;
}

int main() {
    int n, c, r;
    printf("Enter n value : ");
    scanf("%d", &n);
    printf("Enter r value : ");
    scanf("%d", &r);

    c = fact(n) / fact(n-r);

    printf("%d", c);
    return 0;
}
