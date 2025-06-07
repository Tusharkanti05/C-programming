#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, max, min, *p;
    printf("How many data enter : ");
    scanf("%d", &n);

    p = (int*) malloc(n *sizeof(int));
    
    for(i=0; i<n; i++){
        printf("Enter data : ");
        scanf("%d", &p[i]);
    }
    max = p[0];
    min = p[0];
    for(i=1; i<n; i++){
        if(p[i] > max){
            max = p[i];
        } else if (p[i] < min){
            min = p[i];
        }    
    }
    printf("Maximum number is : %d\nMinimum number is %d\n", max, min);
    free(p);
    return 0;
}