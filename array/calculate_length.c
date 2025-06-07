#include <stdio.h>
int main(){
    int c = 0, arr[] = {5, 3, 8, 4};
    
    printf("%d\n", sizeof(arr));                    // calculate size of array
    printf("%d\n", sizeof(arr) / sizeof(arr[0]));  // Calculate length of array      
    return 0;
}
