#include <stdio.h>
int fact(int);

int main(){
    int n, i, s;
    printf("Enter terms : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        s += fact(i);
    }

    printf("%d\n", s);
}

int fact(int n){
    int f, i;
    for(i=1, f=1; i<=n; i++, f *= i);
    return f;
}