//without using 'scrcpy'
#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char x[10], y[10];
    printf("Enter string : ");
    gets(x);
    for(i=0; x[i] != '\0'; i++) {
        y[i] = x[i];
    }
    y[i] = '\0';
    printf("%s\n%s", x, y);
    return 0;
}