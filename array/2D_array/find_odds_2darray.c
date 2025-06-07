#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of eniments in array : ");
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++) {
        printf("Enter number : ");
        scanf("%d", &arr[i]);
    }
    printf("\nodd number is : ");
    for(i=0; i<n; i++) {
        if(arr[i] % 2 != 0) printf("%3d", arr[i]);
    }
    return 0;
} 