// Factors of a sum
#include <stdio.h>
int main(){
    int num,i;
    printf("Enter number : ");
    scanf("%d",&num);

    printf("Factors of %d is : ",num);
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d\t",i);
        }
    }
    return 0;
}