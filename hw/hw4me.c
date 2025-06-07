// 1 + x^2 / 2! + x^4 / 4! + x^6 / 6!...n
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("enter terms: ");
    scanf("%d",&n);
    int i, j, s = 1;
    int fact = 1;
   
    for(i=2; i <= n; i += 2){
        fact *+ i;
        s += pow(i,i) / fact;
    }

    printf("%d",s);
}