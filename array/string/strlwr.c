//without strlwr
#include <stdio.h>
int main() {
    char ch[10];
    int i;
    printf("Enter string : ");
    scanf("%s", ch);
    for(i=0; ch[i] !='\0'; i++) {
        if(ch[i] >= 65 && ch[i] <= 90) {
            ch[i] += 32;
        }
    }
    printf("%s", ch);
    return 0;
}