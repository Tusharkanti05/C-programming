#include <stdio.h>
int main(){
    int i, j, r, c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of collumn : ");
    scanf("%d", &c);
    int arr[r][c];

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            printf("Enter data : ");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}