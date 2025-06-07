#include <stdio.h>
int countOdd(int arr[]) {
    int i, count = 0, len;
    len = sizeof(arr) / sizeof(arr[0]);
    for(i = 0; i < len; i++) {
        if(arr[i] % 2 != 0) count++;
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("Total odd number is %d", countOdd(arr));
    return 0;
}