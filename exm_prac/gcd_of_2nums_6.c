#include <stdio.h>
void fun(int,int);

int main() {
    int x, y;
    printf("Enter two numbers : ");
    scanf("%d%d", &x, &y);

    fun(x,y);

    return 0;
}

void fun(int x, int y) {
    int i = 2, lcm, gcd = 1;

    while(i <= x && i <= y) {
        if (x % i == 0 && y % i == 0) {
            gcd *= i;
            x /= i;
            y /= i;
        } else i++;
    }
    lcm = gcd * x * y;

    printf("Gcd : %d\nLcm : %d\n", gcd, lcm);
}