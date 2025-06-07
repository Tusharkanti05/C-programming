#include <stdio.h>
int main(){
    int a[40], n, i;
    printf("How many data you want to enter : ");
    scanf("%d", &n);

    printf("Enter starting data : ");
    scanf("%d", &a[0]);
    for(i=1; i<n; i++){
        printf("Enter value : ");
        scanf("%d", &a[i]);
        if(a[i-1] > a[i])   i--;
    }

    for(i=0; i<n; i++){
        printf("%d\t", a[i]);
    }

    return 0;
}