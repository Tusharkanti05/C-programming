#include <stdio.h>
int main(){
    int arr[4], i, small;
    for(i=0; i<4; i++) {
        printf("Enter %d number: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=1; i<4; i++){
        small = arr[0];
        if(small > arr[i])  small = arr[i];   
    }
    printf("\nSmallest number is %d", small);
    return 0;
}