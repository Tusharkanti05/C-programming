#include <stdio.h>
int main(){
    int n;
    printf("enter no: ");
    scanf("%d",&n);
    int i = 2, f = 0;
    while (i <= n/2 && f == 0){
        if(n % i == 0){
            f = 1;
        }
        i++;
    }
    
    if(f == 0){
        printf("prime number\n");
    } else {
        printf("not prime\n");
    }
}