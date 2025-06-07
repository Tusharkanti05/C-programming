#include <stdio.h>
float celsius(float fahr){
    fahr = (fahr - 32) * 5/9.0;
    return fahr;
}

int main(){
    float fahrenhit;
    printf("Enter fahrenhit value : ");
    scanf("%f",&fahrenhit);

    printf("Celsius value is : %.2f",celsius(fahrenhit));
}