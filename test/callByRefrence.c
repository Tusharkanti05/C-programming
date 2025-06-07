#include <stdio.h>
int main() {
    char ch[30];
    int i, len, v;

    printf("Enter string : ");
    gets(ch);

    for(len=0; ch[len] !='\0'; len++);
    for(i=0, v=0; i<len; i++) {
        if(ch[i] == 'A' || ch[i] == 'a' || ch[i] == 'E' || ch[i] == 'e' 
        || ch[i] == 'I' || ch[i] == 'i' || ch[i] == 'O' || ch[i] == 'o' || ch[i] == 'U' || ch[i] == 'u')
            v++;
    }

    printf("Vowel is %d\nConsonent %d\n", v, len-v);
    return 0;
}