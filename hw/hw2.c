// s = 1 + 2/3 + 3/4 + 4/5...n
#include <stdio.h>
int main(){
    int i,n;
    float s = 1;
    printf("enter terms : ");
    scanf("%d",&n);

    for(i=2; i<=n; i++){
        s += i/(i+1.0);
    }
    printf("%.2f",s);
}