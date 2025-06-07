#include <stdio.h>
int main(){
    char ch;
    FILE *fptr;
    fptr = fopen("sample.txt", "r");

    if(fptr == NULL){
        printf("File dousn't exist\n");
    } else {
        
        while(ch = fgetc(fptr) != EOF){
            putchar(ch);
        }
    }
    
    fclose(fptr);
}