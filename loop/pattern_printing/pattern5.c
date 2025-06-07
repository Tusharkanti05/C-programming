#include <stdio.h>
int main() {
    int i, j;
    for(i='A'; i<='E'; i++) {
        for(j=0; j<=4; j++) {
            printf("%c", i);
        }
        printf("\n");
    }
    return 0;
}

/*  AAAAA
    BBBBB
    CCCCC
    DDDDD
    EEEEE   */