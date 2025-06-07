// s = 1 + 1/3 + 1/5 + 1/7...n
#include <stdio.h>
int main() {
    int n,i;
    printf("enter terms : ");
    scanf("%d",&n);
    float s=1;
    for(i=3; i<n*2; i=i+2){
        s += 1.0 / i;
    }
    printf("%.2f",s);
}