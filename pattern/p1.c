#include <stdio.h>
int main(){
    int i, j, sp;
    for(i=1; i<=5; i++){
        for(sp=i; sp <= 5; sp++){
            printf(" ");
        }
        for(j=i; j>=1; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}