#include <stdio.h>
int main(){
    int x, y;
    printf("Enter the element of x : ");
    scanf("%d", &x);
    printf("Enter the element of y : ");
    scanf("%d", &y);

    // swaping 
    x = x^y;
    y = x^y;
    x = x^y;

    printf("After swaping x = %d\ty = %d", x, y);
    return 0; 
}