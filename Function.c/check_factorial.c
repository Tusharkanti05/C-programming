#include <stdio.h>
void fact (int);
void fact (int n) {
    int i, f = 1; 
    for(i = 1; i <= n; i++) {
        f = f * i;
    }

    printf("Factorial is %d\n", f);
}

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    
    fact(n);
    return 0;
}