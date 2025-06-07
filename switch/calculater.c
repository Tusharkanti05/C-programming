#include <stdio.h>
int main(){
    float n1,n2;
    char operation;
    printf("Enter 1st number: ");
    scanf("%f",&n1);
    printf("Enter 2nd number: ");
    scanf("%f",&n2);
    getchar();
    printf("enter operation(+,-,*,/): ");
    scanf(" %c",&operation);

    switch (operation){
        case '+': printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
                break;
        case '-': printf("%.2f - %.2f = %.2f",n1,n2,n1-n2);
                break;
        case '*': printf("%.2f * %.2f = %.2f",n1,n2,n1*n2);
                break;
        case '/': printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
                break;
        default : printf("Not a valid operation");             
    }
    return 0;
}