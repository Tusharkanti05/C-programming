#include <stdio.h>
float fahrenhit(float fahrn){
    fahrn = fahrn * 9/5.0 + 32;
    return fahrn;
}

int main(){
    float c;
    printf("Enter celsiud value : ");
    scanf("%f",&c);

    printf("Fahrenhit value is : %.2f",fahrenhit(c));
}