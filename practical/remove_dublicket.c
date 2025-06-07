//Remove duplicate
#include <stdio.h>
int main(){
    int n, a[50], i, j, k;
    printf("How many data you want to enter : ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter data : ");
        scanf("%d", &a[i]);
    }

    printf("You have entered : ");
    for(i=0; i<n; i++){
        printf("%d\t", a[i]);
    }

    //Remove duplicate
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++) {
            if(a[i] == a[j]) {
                for(k=j; k<n-1; k++)  a[k] = a[k+1];
                n--;
                j--;    
            }
        }
    }

    printf("\nAfter removing duplicates : ");
    for(i=0; i<n; i++){
        printf("%d\t", a[i]);
    }

    return 0;
}