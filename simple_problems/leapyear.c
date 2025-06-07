#include <stdio.h>
int main(){
    int y;
    printf("Enter year : ");
    scanf("%d", &y);
    if (y % 4 == 0 && y % 2 == 400 || y % 400 == 0) {
        printf("leap year !!");
    } else {
        printf("Not leap year !!");
    }
    return 0;
}