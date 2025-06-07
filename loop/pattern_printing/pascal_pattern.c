#include <stdio.h>
int main() {
    int n, i, j, k, space, num;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print each row of the triangle
    for(i = 0; i < n; i++) {
        for(space = 0; space < n-i; space++) {
            printf(" ");
        }

        // Print numbers in the row
        for(j = 0; j <= i; j++) {
            num = 1;
            if(j > 0) {
                num = 1;
                for(k = 0; k < j; k++) {
                    num = num * (i - k) / (k + 1);
                }
            }
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}