#include <stdio.h>
int main(){
    int p,t;
    float r,si;
    
    printf("Enter principal value : ");
    scanf("%d",&p);
    printf("Enter rate of interest : ");
    scanf("%f",&r);
    printf("Enter the duration of time(yearly): ");
    scanf("%d",&t);
    
    si = (p * r * t) / 100;
    
    printf("simple interest = %.2f\nTotal amount is = %.2f",si,si + p);
    return 0;
}