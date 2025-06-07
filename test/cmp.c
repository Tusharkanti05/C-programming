#include <stdio.h>
int main() {
    char a[10], b[10];
    int i, lena, lenb, f=1;
    printf("Enter 1st string : ");
    scanf("%s", a);
    printf("Enter 2st string : ");
    scanf("%s", b);

    for(lena=0; a[lena] !='\0'; lena++);
    for(lenb=0; b[lenb] !='\0'; lenb++);

    if(lena != lenb) f=0;
    else for(i=0; i<lena && f==1; i++){
            printf("%c", a[i]);
            if(a[i] != b[i]) f=0;
        }
    if(f==1) printf("Same\n");
    else printf("Not same\n");
    
    return 0;
}