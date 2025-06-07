//without strcmp
#include <stdio.h>
int main(){
    char x[10], y[10];
    int xl, yl, i, f=0;
    printf("Ener 1st string : ");
    scanf("%s", x);
    printf("Enter 2nd string : ");
    scanf("%s", y);

    for(xl=0; x[xl] !='\0'; xl++);
    for(yl=0; y[yl] !='\0'; yl++);
    if(xl != yl){
        f=1;
    } else {
        for(i=0; i<xl && f==0; i++){
            if(x[i] != y[i]) f=1;
        } 
    }
    if(f==0) printf("same\n");
    else printf("Not same\n");
    return 0;
}