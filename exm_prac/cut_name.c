#include <stdio.h>
int main() {
    char ch[20];
    int i, j, k, len, f = 0;
    printf("Enter string : ");
    gets(ch);

    for(len=0; ch[len] !='\0'; len++);
    printf("%c. ", ch[0]);
    for(i=1; i<len && f == 0; i++) {
        if(ch[i] == ' ') {
            for(j=i+1; j<len && f==0; j++) {
                if(ch[j] ==' ') {
                    f=1;
                    printf("%c. ", ch[i+1]);
                }    
            }
            for(k=i + 1; j<len && f == 0; k++) {
                if(ch[k] == '\0') {
                    f = 1;
                }
            }
        }
    }
    if(f == 1){
        printf("%s", &ch[j]);
    } else {
        printf("%s", &ch[k]);
    }
    return 0;
}