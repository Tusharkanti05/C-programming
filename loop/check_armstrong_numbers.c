#include <stdio.h>
int main(){
    int n1, n2, i, n, j, c, r, p, s;
    printf("Enter starting value & ending value: ");
    scanf("%d%d",&n1,&n2);

    for(i=n1; i<=n2; i++){

        for(n=i,c=0; n>0; c++,n/=10);
        n = i;
        s = 0;

        while(n > 0){
            r = n % 10;
            p = 1;
            for(j=1; j<=c; p*=r,j++);
            s += p;
            n /= 10;
        }

        if(i == s){
            printf("%d\t",i);
        }
    }
    return 0;
}