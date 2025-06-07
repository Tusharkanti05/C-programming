#include <stdio.h>
int main(){
    int n, i, f = 0;
    printf("enter a number: ");
    scanf("%d",&n);

    if(n < 2){
        n = 2;
    }
    for(i=2; i<n/2 && f==0; i++){
        if (n % 2 == 0) f = 1;
    }

    if(f == 0){
            printf("%d prime a number\n",n);
    } else {
        printf("%d isn't a prime number",n);
    }
    return 0;
}