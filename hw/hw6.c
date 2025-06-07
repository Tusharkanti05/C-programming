// 1 + 11 + 111 + 1111...n
#include <stdio.h>
int main(){
    int n, sum = 0, x = 1,i;
    printf("Enter terms : ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        sum += x;
        printf("%d\t",x);
        x = x * 10 + 1;
    }
    printf("\nsum of this series is %d",sum);
    return 0;
}