#include <stdio.h>
int main(){
    int n,m,s=0;
    printf("enter number: ");
    scanf("%d",&n);

    while (n != 0){
        m = n % 10;
        s += m;
        n /= 10;
    }
    
    printf("sum of digits : %d",s);
    return 0;
}