#include <stdio.h>
void fun(int, int, int*,int*, int*, float*);
void fun(int x, int y, int *a, int *s, int *m,float *d) {
    *a = x + y;
    *s = x - y;
    *m = x * y;
    *d = (float)x / y; 
}

int main() {
    int x, y, a, s, m;
    float d;
    printf("Enter 1st number : ");
    scanf("%d", &x);
    printf("Enter 2nd number : ");
    scanf("%d", &y);

    fun(x, y, &a, &s, &m, &d);
    printf("Addition is %d\nSubtraction is %d\nMultiplicatiom is %d\nDivision is %.2f", a,s,m,d);
    return 0;
}