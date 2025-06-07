#include <stdio.h>
void fibo(int,int,int);

int main(){
    int x = 0, y = 1, n;
    printf("Enter fibonacci terms : ");
    scanf("%d", &n);
    printf("\n%d\t%d\t", x,y);
    
    if(n > 2) fibo(x,y,n-2);
    return 0;
}

void fibo(int x,int y,int n){
    int z = x + y;
    printf("%d\t", z);
    if(n > 1) fibo(y,z,n-1);
}