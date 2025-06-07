#include <stdio.h>
int main(){
    float l,w;
    printf("Enter length of rectangle : ");
    scanf("%f",&l);
    printf("\nEnter width of rectangle : ");
    scanf("%f",&w);
    
    printf("\nThe parameter of rectangle is : %.2f",2 * (l + w));
    return 0;
}