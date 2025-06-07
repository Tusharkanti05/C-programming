//strcat
#include <stdio.h>
int main() {
    char x[20], y[10], i, j;
    printf("Enter 1st string : ");
    scanf("%s",x);
    printf("Enter 2nd string : ");
    scanf("%s",y);

    for(i=0; x[i] !='\0'; i++);
    x[i++] =' ';
    for(j=0; y[j] !='\0'; j++, i++) {
        x[i] = y[j];
    }
    y[j]='\0';

    printf("Result is %s", x);
    return 0;
}