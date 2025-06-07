#include <stdio.h>
int main(){
    int i;
    char arr[20];
    printf("Enter string : ");
    scanf("%s", arr);

    for(i=0; arr[i] !='\0'; i++){
        if(arr[i] >= 97 && arr[i] <= 122) arr[i] -= 32;
    }

    printf("%s", arr);
    return 0;
}