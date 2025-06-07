// s = 1-2 + 3-4 + 5-6...
#include <stdio.h>
int main(){
    int n, i, s = 0;
    printf("Enter terms : ");
    scanf("%d", &n);
    for(i=1; i<=n*2; i+=2){
        s = s + i - (i+1);
    }
    printf("result is %d", s);
    return 0;
}