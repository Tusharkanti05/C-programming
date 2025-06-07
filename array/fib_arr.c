#include <stdio.h>
int main() {
    int n, i;
    printf("Enter fibonacci terms : ");
    scanf("%d", &n);
    int fib[n];
    if(n<1) {
        printf("Enter valid value!!\n");
    } else {
        fib[0] = 0, fib[1] = 1;
        if(n == 1) {
            printf("%d", fib[0]);
        } else {
            printf("%d\t%d\t", fib[0],fib[1]);
        }

        for(i=2; i<n; i++) {
            fib[i] = fib[i-1] + fib[i-2];
            printf("%d\t", fib[i]);
        }
    }
    return 0;
}