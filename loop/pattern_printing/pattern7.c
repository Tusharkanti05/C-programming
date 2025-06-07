#include <stdio.h>
int main() {
    int i, j;
    for(i=0; i<5; i++) {
        for(j='E'; j>='A'; j--) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
/*  EDCBA
    EDCBA
    EDCBA
    EDCBA
    EDCBA   */