//without using library function
#include <stdio.h>
int main() {
    int l;
    char arr[10];
    printf("Enter string : ");
    gets(arr);
    for(l = 0; arr[l] !='\0'; l++);
    printf("%s%d", arr, l);
    return 0;
}