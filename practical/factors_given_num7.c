#include <stdio.h>

int main() {
    int num, i;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("\nFactors of %d are:\n", num);
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}