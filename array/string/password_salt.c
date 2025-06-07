#include <stdio.h>
#include <string.h>
void add_salt(char pass[],char salt[]) {
    char newpass[16];
    strcpy(newpass,pass);
    strcat(newpass,salt);
    printf("Your password is : %s", newpass);
}

int main() {
    char pass[10], salt[6];
    printf("Enter your password : ");
    fgets(pass,sizeof(pass),stdin);
    printf("Enter salt : ");
    fgets(salt,sizeof(salt),stdin);
    
    add_salt(pass,salt);
    return 0;
}