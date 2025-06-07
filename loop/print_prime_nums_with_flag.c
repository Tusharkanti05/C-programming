#include <stdio.h>
int main(){
    int num1,num2,i,j,f;
    printf("Enter starting value : ");
    scanf("%d", &num1);
    printf("Enter ending value : ");
    scanf("%d", &num2);

    if(num1 < 2){
        num1 = 2;
    }

    for(i = num1; i <= num2; i++){
        for(j = 2,f=0; j <= i/2 && f==0; j++){
            if(i % j == 0){
                f = 1;
            }
        }

        if(f == 0){
            printf("%d\t",i);
        }
    }

    return 0;
}