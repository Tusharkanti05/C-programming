#include <stdio.h>
int reverseNum(int);
int reverseNum(int n) {
    if(n < 1) return 0;
    int i, r, rev = 0;
    for(i = 1; n != 0; i++) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printf("After reversed : %d\n", reverseNum(n));
    return 0;
}