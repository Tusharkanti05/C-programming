//search data 
#include <stdio.h>

int main() {
    int a[3][3], num, i, j, f = 0;
    
    printf("Enter 3x3 matrix elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter data : ");
            scanf("%d", &a[i][j]);
        }
    }
    //display
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnter number to search: ");
    scanf("%d", &num);
   
    for(i = 0; i < 3 && f==0; i++) {
        for(j = 0; j < 3 && f==0; j++) {
            if(a[i][j] == num)
                f = 1;
        }
    }
    
    if(f == 0) {
        printf("Number not found\n");
    } else {
        printf("Data is found at i = %d, j = %d\n", i-1, j-1);
    }
    return 0;
}