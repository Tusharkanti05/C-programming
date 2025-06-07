#include <stdio.h>
void printNum(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter number : ");
        scanf("%d", &arr[i]);
    }

    printNum(arr,5);
}