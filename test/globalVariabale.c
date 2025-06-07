#include <stdio.h>
int main(){
    int a[30];
    int i, n, item, loc;
    printf("How many data enter : ");
    scanf("%d", &n);
    
    // Array create
    for(i=0; i<n; i++){
        printf("Enter data : ");
        scanf("%d", &a[i]);
    }
    // Array display
    for(i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    // searching
    printf("\nEnter searching data : ");
    scanf("%d", &item);
    for(i=0, loc = -1; i<n && loc == -1; i++){
        if(a[i] == item) loc = i;
    }

    if(loc == -1){
        printf("Data is not found\n");
    } else {
        printf("Data is found\nIndex Location is %d", loc);
    }
    return 0;
}