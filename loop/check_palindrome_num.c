#include <stdio.h>
int revrce(int n){
    int rev = 0;
    while (n > 0){
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;   
}

int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    int rev = revrce(n);

    if(rev == n){
        printf("palindrom number\n");
    } else {
        printf("Not\n");
    }
}