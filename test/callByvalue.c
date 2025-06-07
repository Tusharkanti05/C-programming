//factorial using recursion

#include<stdio.h>
int fact(int);
int fact(int n)
{
    int f=1;
    if(n>1)
    {
        f=n*fact(n-1);
    }
    return f;
}
int main()
{
    int n,f;
    printf("\n enter term = ");
    scanf("%d",&n);
    f=fact(n);
    printf("\n factorial = %d",f);
}