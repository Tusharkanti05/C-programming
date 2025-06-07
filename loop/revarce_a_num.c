#include <stdio.h>

int main(){
    int num,rev=0,rem=0;
    printf("Enter number to reverse: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
     // printf("%d", rem); 
        rev = rev * 10 + rem;
        num /= 10; 
    }

    printf("After reverse %d",rev);

    return 0;
}