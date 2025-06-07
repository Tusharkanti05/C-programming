#include <stdio.h>
#include <math.h>
int main() {
    float a, b;
    double r;
    printf("Enter base number : ");
    scanf("%f", &a);
    printf("Enter power : ");
    scanf("%f", &b);
    r = pow(a,b);
    printf("%lf", r);
    return 0;
}