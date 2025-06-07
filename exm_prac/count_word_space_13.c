#include <stdio.h>
int main() {
    char ch[50], i, w, s;
    printf("Enter string : ");
    gets(ch);

    for(i=0,s=0; ch[i] !='\0'; i++){
        if(ch[i] == 32) s++;
    }
    w = s+1;

    printf("Space : %d\nWord : %d\n", s, w);

    return 0;
}