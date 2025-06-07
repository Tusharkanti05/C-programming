#include <stdio.h>
int main() {
    int  x, y, i, j;
    printf("Enter lenth of x(rows) : ");
    scanf("%d", &x);
    printf("Enter lenth of y(columns) : ");
    scanf("%d", &y);
    int a[x][y], b[x][y], c[x][y];

    // creat 1st matrix
    printf("Enter 1st matrix data\n");
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("Enter data : ");
            scanf("%d", &a[i][j]);
        }
    }
    // creating 2nd matrix
    printf("Enter 2nd matrix data\n");
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("Enter data : ");
            scanf("%d", &b[i][j]);
        }
    }
    // addition of 2 matrix
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // print 1st matrix
    printf("\n1st matrix you have entered : \n");
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // print 2nd matrix
    printf("2nd matrix you have entered : \n");
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    // print the addition of a, b matrix
    printf("After addition of 2 matrix : \n");
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}