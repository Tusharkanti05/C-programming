#include <stdio.h>
int main(){
    char str1[20], str2[10];
    int i, j;
    printf("Enter string : ");
    scanf("%19[^\n]s", str1);
    getchar();
    printf("Enter string : ");
    scanf("%19[^\n]s", str2);

    for(i=0; str1[i] !='\0'; i++);
    str1[i++] =' ';
    for(j=0; str2[j] !='\0'; j++, i++){
        str1[i] = str2[j];
    }
    str1[i] ='\0';

    printf("%s", str1);
}