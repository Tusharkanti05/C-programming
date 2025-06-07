#include <stdio.h>
int main(){
    int n, s = 0, p = 1, m;
    printf("Enter digit : ");
    scanf("%d", &n);

    while(n != 0){
        m = n % 10;
        s += m;
        p *= m;
        n /= 10; 
    }
    printf("Sum of digit is %d\nProduct of didit is %d", s, p);
    return 0;
}