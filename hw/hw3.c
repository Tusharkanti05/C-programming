// 1/1! + 2/2! + 3/3!...n
#include <stdio.h>
int main(){
    int n,fact = 1,i;
    float s = 0;
    printf("enter terms : ");
    scanf("%d",&n);

    for(i = 1; i<= n; i++){
        fact  *= i;
        s += (float) i / fact;      
    }
    printf("%.2f",s);
    return 0;
} 