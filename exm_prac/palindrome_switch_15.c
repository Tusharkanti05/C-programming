#include <stdio.h>
int main(){
    int x, n = 0, rem, rev = 0, arr[50], i, len;
    printf("Enter 1 to check number is palindrome or not\nEnter 2 to check the string is palindrome or not : ");
    scanf("%d", &x);

    if(x == 1 || x == 2) {
        switch(x) {
            case 1 :
                printf("Enter number : ");
                scanf("%d", &n);

                i = n;
                while (n != 0) {
                    rem = n % 10;
                    rev = rev * 10 + rem;
                    n /= 10;
                }

                if(i == rev) printf("The number is palindrome\n");
                else printf("The number is not palindrome\n");
                break;
            case 2 :
                printf("Enter string : ");
                scanf("%s", arr);

                for(len=0; arr[len] !='\0'; len++);

                for(i=0, len-=1; i<len/2 && n == 0; i++){
                    if(arr[i] != arr[len-i])
                        n = 1;
                }

                if(n == 0) printf("String is palindrome\n");
                else printf("String is not palindrome\n");
                break;
        }
    } else 
        printf("\nEnter a valid input!!\n");

    return 0;
}