#include<stdio.h>
int main(){
    int a[30], i, loc, n, item;
    printf("How many data enter : ");
    scanf("%d", &n);

    //create array
    for(i=0; i<n; i++){
        printf("Enter data : ");
        scanf("%d", &a[i]);
    }
    //display array
     for(i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    
    //insert element
    printf("\nEnter location : ");
    scanf("%d", &loc);
    if(loc <= n && loc >= 0){
        printf("Enter the data to insert : ");
        scanf("%d", &item);

        //shifting the datas
        for(i=0; i<n-loc; i++){
            a[n-i] = a[n-i-1];
        }
        a[loc] = item;
        n++;

        //display
        for(i=0; i<n; i++){
            printf("%d\t", a[i]);
        }
    } else {
        printf("You have entered a invalid location \n");
    }
    return 0;
}