// Print table
#include <stdio.h>
int main(){
    int n, i, d;
    printf("enter number: ");
    scanf("%d",&n);
    printf("enter duaration: ");
    scanf("%d",&d);

    for(i=1; i<=d; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}