#include <stdio.h>
int main() {
    int x, y;
    printf("Enter size of x(rows): ");
    scanf("%d", &x);
    printf("Enter size of y(column) : ");
    scanf("%d", &y);
    
    int arr[x][y], min, max, i, j;
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) {
            printf("Enter number : ");
            scanf("%d", &arr[i][j]);
        }
    }
    min = arr[0][0], max = arr[0][0];
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) {
            if(min >= arr[i][j]){
                min = arr[i][j];
            }
            if(max <= arr[i][j]){
                max = arr[i][j];
            }
        }
    }

    printf("Minimum value is %d\nmaximum value is %d\n", min, max);
    return 0;
}