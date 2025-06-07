#include <stdio.h>
int main() {
    char a[10], tmp;
    int l, i;
    printf("Enter string : ");
    scanf("%s", a);

    for(l=0; a[l] !='\0'; l++);
    for(i=0; i<l/2; i++) {
        tmp = a[i];
        a[i] = a[l-i-1];
        a[l-i-1] = tmp;
    }

    printf("%s", a);
}