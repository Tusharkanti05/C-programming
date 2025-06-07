#include <stdio.h>
#include <string.h>

int main() {
    int f = 0;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') f = 0;

        }
    }

    if(f = 1) printf("Vowel\n");
    else printf("Consonent\n");
    
    return 0;
}
