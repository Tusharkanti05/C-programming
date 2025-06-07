#include <stdio.h>
int main(){
    int n, i, r, j, f, s = 0, n1;
    printf("Enter number : ");
    scanf("%d", &n);

    n1 = n;
    for(i = 1; n1 != 0; i++){
        r = n1 % 10;
        for(j = 1, f = 1; j <= r; j++){
            f = f * j;
        }
        s = s + f;
        n1 = n1 / 10;
    }

    if (s == n) {
        printf("Strong number\n");
    } else {
        printf ("Not\n");
    }
    return 0;
}