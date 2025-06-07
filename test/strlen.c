#include <stdio.h>
int main() {
    char a[10];
    int i, len, l, sp;

    printf("Enter string : ");
    gets(a);

    for(len=0; a[len] !='\0'; len++);
    for(i=0, sp=0; i<len; i++){
        if(a[i] ==' ') sp++;
    }

    l = len - sp;
    printf("Letter is %d and space is %d\n", l, sp);
    return 0;
}