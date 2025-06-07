#include <stdio.h>
int main(){
    float length, breadth, area, parimiter;

    printf("Enter length : ");
    scanf("%f", &length);
    printf("Enter beragth : ");
    scanf("%f", &breadth);
    
    area = length * breadth;
    parimiter = 2 * (length + breadth);
    if(area > parimiter) printf("Area of reactangle is grater than it's parimiter\n");
    else printf("Area of reactangle is't grater than it's parimiter\n");
    return 0;
}