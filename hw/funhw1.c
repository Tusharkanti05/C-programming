// 1 + 1/3 + 1/5 + 1/7...n
#include <stdio.h>
float returnNum(int);
float returnNum(int n) {
    int i; float s = 1;
    for(i = 3; i <= n * 2; i+=2) {
        s = s + 1.0 / i;
    }
    return s;
}

int main() {
    int n;
    printf("Enter the terms : ");
    scanf("%d", &n);

    printf("Result is %.2f", returnNum(n));
    return 0;
}