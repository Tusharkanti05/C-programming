#include <stdio.h>
int main() {
    int i, t, s = 0, fib1 = 0, fib2 = 1, tmp;
    printf("enter terms : ");
    scanf("%d", &t);

    if(t < 1) printf("Enter a value grater than 1\n");
    else {
        if(t == 1) printf("%d", fib1);
        else {
            printf("%d\t%d\t",fib1,fib2);

            for(i=3; i<=t; i++) {
                tmp = fib1 + fib2;
                printf("%d\t", tmp);
                fib1 = fib2;
                fib2 = tmp;
            }
        }
    }
    return 0;
}