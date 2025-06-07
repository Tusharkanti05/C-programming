#include <stdio.h>
int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        printf("Enter number : ");
        scanf("%d", &arr[i]);
    }

    printf("You have entered :");
    for(int i = 0; i < 5; i++){
        printf(" %d\t", arr[i]);
    }

    return 0;
}