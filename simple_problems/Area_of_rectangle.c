#include <stdio.h>
int main(){
    float length , breath;
    printf("Enter length : ");
    scanf("%f",&length);
    printf("Enter breath : ");
    scanf("%f",&breath);
    
    printf("Area of rectangle is %.2f",length * breath);
    return 0;
}