#include <stdio.h>
void palindrome(char[]);
void palindrome(char str[]){
    int l, i, f = 0;
    for(l=0; str[l] !='\0'; l++);
    for(i=0; i<l/2; i++){
        if(str[i] != str[l-i-1]) f = 1;
    }
    if(f == 1) printf("Not palindrome\n");
    else printf("Palindrome\n");
}

int main(){
    char str[21];
    printf("Enter string : ");
    scanf("%20[^\n]s", str);
    palindrome(str);
    return 0;
}