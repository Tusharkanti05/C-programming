#include <stdio.h>
int main(){
    int i, t, j, x;
    printf("Enter terms : ");
    scanf("%d", &t);
    for(i=1; i<=t*2; i=i+2){
        x = 1;
        for(j=1; j<=3; j++){
            x *= i;
        }
        printf("%d\t", x);
    }
    return 0;
}