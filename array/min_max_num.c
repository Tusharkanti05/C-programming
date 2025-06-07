#include <stdio.h>
int main() {
    int arr[] = {2, 1, 9, 4, 5, 11};
    int n = sizeof(arr) / sizeof(arr [0]);
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("Minimum value is %d\nMaximum value is %d",min,max);
    return 0;
    
}