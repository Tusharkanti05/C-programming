#include <stdio.h>
int fibo(int, int, int);

int fibo(int x, int y, int n){
    int z = x + y;
    printf("%d\t", z);
    if(n > 1) fibo(y, z, n-1);
}

int main(){
    int x = 0, y = 1, n;
    printf("Enter terms : ");
    scanf("%d", &n);
    if(n < 1) printf("Enter positive number\n");
    else if(n==1) printf("%d\n", x);
    else printf("%d\t%d\t", x, y);

    if(n > 2) fibo(x,y,n-2);

    return 0;
}
