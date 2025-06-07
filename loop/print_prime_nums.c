#include <stdio.h>
int main() {
    int i, j, num1, num2, count;
    printf("Enter the starting value: ");
    scanf("%d", &num1);
    printf("Enter the duration value: ");
    scanf("%d", &num2);
    
    for (i = num1; i <= num2; i++) {
        count = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d\t", i);
        }
    }
    
    return 0;
}