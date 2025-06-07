// print the sum of the series 9 + 99 + 999 + 9999...n
#include <stdio.h>
int main(){
    int n,i,x = 9,sum = 0;
    printf("Enter terms : ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        sum += x;
        printf("%d\t",x);
        x = x * 10 + 9;
    }
    printf("\nsum of this series is %d",sum);
}