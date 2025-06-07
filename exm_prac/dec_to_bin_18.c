#include <stdio.h>
void binary(int);
void binary(int n){
    int a[20];
    int i = 0;
    while(n > 0){
        a[i] = n % 2;
        n /= 2;
        i++;
    }
    for(i--; i>=0; i--) {
        printf("%d",a[i]);
    }    
}

int main(){
    int n;
    printf("Enter decimal number : ");
    scanf("%d",&n);
    printf("Binary is ");
    binary(n);
    return 0;
}