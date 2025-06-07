#include <stdio.h>
int main(){
    int a[4][10][10];
    int i, j, k;

    //create two matrix
    for(i=0; i<2; i++){
        printf("%d matrix\n", i+1);
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                printf("Enter data : ");
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    //Matrix addition
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            a[2][i][j] = a[0][i][j] + a[1][i][j];
        }
    }
    //Matrix multiplication
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            a[3][i][j] = 0;
            for(k=0; k<3; k++){
                a[3][i][j] += a[0][i][k] * a[1][k][j];
            }
        }
    }
    // Display array
    for(i=0; i<4; i++){
        printf("%d matrix\n", i+1);
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                printf("%d\t", a[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}