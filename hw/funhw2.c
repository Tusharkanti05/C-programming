// 1 + 2/3 + 3/4 + 4/5...n
#include <stdio.h>
float returnNum(int);
float returnNum(int n) {
    int i;
    float s = 1;

    for(i = 2; i <= n; i++) {
        s = s + i/(i+1.0);
    }
    return s;
}

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Result is %.2f", returnNum(n));
    return 0;
}