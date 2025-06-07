//without strrev
#include <stdio.h>
int main() {
    char ch[10], t;
    int i, len;
    printf("Enter string : ");
    scanf("%s", ch);

    for(len=0; ch[len] !='\0'; len++);
    for(i=0, len--; i<len/2; i++) {
        t = ch[i];
        ch[i] = ch[len-i];
        ch[len-i] = t;
    }

    printf("After reverse : %s", ch);
    return 0;
}