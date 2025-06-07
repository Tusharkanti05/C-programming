#include <stdio.h>
int main() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j='A'; j<='E'; j++) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
/*  ABCDE
    ABCDE
    ABCDE
    ABCDE
    ABCDE   */