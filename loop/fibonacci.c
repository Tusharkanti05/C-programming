#include<stdio.h>
int main(){
    int fib1 = 0,fib2 = 1,n,temp;
    printf("enter fibonacci terms: ");
    scanf("%d",&n);

    if(n<1){
        printf("enter a positive value: ");
    } else {
        if(n==1){
             printf("%d", fib1);
        } else {
            printf("%d\t%d\t",fib1,fib2);
        }
        for(int i=3;i<=n;i++){
            temp = fib1+fib2;
            printf("%d\t",temp);
            fib1 = fib2;
            fib2 = temp;
        }
    }
    return 0;
}