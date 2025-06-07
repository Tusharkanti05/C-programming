// count small & capital letters, digit, space, symbol
#include <stdio.h>
int main() {
    char str[41];
    int i, s = 0, c = 0, d = 0, sp = 0, sy;
    printf("Enter string : ");
    scanf("%20[^\n]s", str);
    for(i=0; str[i] !='\0'; i++) {
        if(str[i] >= 97 && str[i] <= 122) s++;
        else if(str[i] >= 65 && str[i] <= 90) c++;
        else if(str[i] >= 48 && str[i] <= 57) d++;
        else if(str[i] == 32) sp++;
    }
    sy = i-s-c-d-sp;
    printf("small letter : %d\ncapital letter : %d\ndigit : %d\nspace : %d\nsymbol : %d\n", s, c, d, sp, sy);
    return 0;
}