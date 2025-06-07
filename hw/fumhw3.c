// 1/1! + 2/2! + 3/3!...n
#include <stdio.h>
float returnNum(int);
float returnNum(int n) {
    int i, f = 1;
    float s = 0;
    for(i = 1; i<= n; i++) {
        f = f * i;
        s = s + (float)i / f;
    }
    return s;
}

int main() {
    int n;
    printf("Enter terms : ");
    scanf("%d", &n);

    printf("Result is %.2f", returnNum(n));
    return 0;
}