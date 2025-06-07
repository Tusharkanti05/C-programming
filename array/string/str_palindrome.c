// palindrome
#include <stdio.h>
int main() {
    char str[21];
    int len, i, f;
    printf("Enter string : ");
    scanf("%20[^\n]s", str);
    for(len=0; str[len] !='\0'; len++);

    for(i=0,f=1; i<len/2 && f==1; i++) {
       if(str[i] != str[len-i-1]) f = 0;
    } 
    printf("%s\n", str);

    if(f==1) printf("Palindrome string\n");
    else printf("Not palindrome\n");   
    return 0;
}