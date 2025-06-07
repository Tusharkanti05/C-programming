#include <stdio.h>
void desc(int n){
    if (n == 0) return;
    printf("%d\t", n);
    desc(n-1);
    return;
}

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    desc(n);
    return 0;
}