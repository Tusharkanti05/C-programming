#include <stdio.h>
int main(){
    int a[3][3], b[3][3], c[3][3], i, j, k;

    // input 'a' matrix elements
    printf("Enter 1st matrex elements :- \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter number : ");
            scanf("%d", &a[i][j]);
        }
    }
    // input 'b' matrix elements
    printf("\nEnter 2nd matrex elements :- \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter number : ");
            scanf("%d",&b[i][j]);
        }
    }
    
    // multiply 'a' and 'b' matrix
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            c[i][j] = 0;
            for(k=0; k<3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // display matrix 'a'
    printf("\nMatrix a : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // display matrix 'b'
    printf("\nMatrix b : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    // display matrix 'c'
    printf("\nAfter multiplyng matrix a and b : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}