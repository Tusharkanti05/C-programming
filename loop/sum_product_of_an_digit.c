//sum & product of an digit
#include <stdio.h>
int main(){
    int num,sum = 0,product = 1,rem = 0;
    printf("Enter number : ");
    scanf("%d",&num);
    
    while(num != 0){
        rem = num % 10;
        sum += rem;
        product *= rem;
        num /= 10;
    }

    printf("Sum of digit is %d\n",sum);
    printf("Product of digit is %d",product);

    return 0;
}