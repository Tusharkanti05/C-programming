#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of eliments in array ; ");
    scanf("%d", &n);
    int arr[n];
    
    for(i=0; i<n; i++) {
        printf("Enter %d number : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("After reversed : ");
    for(i=n-1; i>=0; i--) {
        printf("%2d", arr[i]);
    }
    return 0;
}