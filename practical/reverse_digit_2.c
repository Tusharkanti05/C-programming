#include <stdio.h>
int main(){
    int n, i, r, rev = 0;
    printf("Enter number : ");
    scanf("%d", &n);

    while(n != 0){
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    } 
    printf("Reverce number is : %d", rev);
    return 0;
}