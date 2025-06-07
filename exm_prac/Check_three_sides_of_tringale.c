#include <stdio.h>
void checkTriangalr(int,int,int);

int main(){
    int x,y,z;
    printf("Enter three side of a  triangale : ");
    scanf("%d%d%d", &x,&y,&z);

    checkTriangalr(x,y,z);
    return 0;
}

void checkTriangalr(int x, int y, int z){
    if(x == y && y == z){
        printf("Equiatral triangale\n");
    } else if (x == y || y == z || x == z) {
        printf("Isoscelers triangale\n");
    } else {
        printf("Scalene triangale\n");
    }
}