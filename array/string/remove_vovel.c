#include <stdio.h>

int main() {
    char str[15], result[15];
    int i, j = 0;

    printf("Enter string: ");
    scanf("%14[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        // Check if the current character is NOT a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i];  // Add non-vowel character to the result
        }
    }
    result[j+1] = '\0';  // Null-terminate the result string
    printf("You have entered : %s\n", str);

    printf("String without vowels: %s\n", result);
    return 0;
}