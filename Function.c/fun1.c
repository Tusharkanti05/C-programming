// n! / r! (n-r)!
#include <stdio.h>
int fun(int);
int fun(int n) {
    int i, f;
    for(i=1,f=1; i<=n; f*=i,i++);
    return f;
}

int main() {
    int n, r;
    printf("Enter the number of n : ");
    scanf("%d", &n);
    printf("Enter the number of r : ");
    scanf("%d", &r);

    printf("Result is %.2f", (float)fun(n) / (fun(r) * fun((n-r))));
}
