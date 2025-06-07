// s = 1 + 1 / 2 + 1 / 3 + 1 / 4... 
#include <stdio.h>
int main(){
    int n, i;
    float s = 1;
    printf("Enter terms : ");
    scanf("%d", &n);
    
    for(i=2; i<=n; i++){
        s = s + 1.0 / i;
    }
    printf("result is %.2f", s);
    return 0;
}