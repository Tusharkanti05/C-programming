// binary to decimal
#include<stdio.h>
int deci(int);
int deci(int n){
    int b=1,d=0,r;
    while(n>0){
        r=n%10;
        d=d+r*b;
        b=b*2;
        n=n/10;
    }
    return d;
}
int main(){
    int n;
    printf("\n enter binary number : ");
    scanf("%d",&n);
    deci(n);
    printf("Decimal of %d is : %d",n, deci(n));
    return 0;
}