#include<stdio.h>
void crestruc(int);
void display(int);
struct stu
{
    int r;
    char na[10];
    float f;
} s[100];
void crestruc (int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\n enter roll: ");
        scanf("%d",&s[i].r);
        printf("\n enter name: ");
        scanf("%s",s[i].na);
        printf("\n enter fees: ");
        scanf("%f",&s[i].f);
    }
}
void display(int n)
{
    int i;
    printf("\n roll\t name\tfees\n");
    printf("\n ");
    for(i=0; i<n; i++)

        printf("\n%d\t%s\t%f\n",s[i].r,s[i].na,s[i].f);
}
int main()
{
    int n;
    printf("\n how many record enter: ");
    scanf("%d",&n);
    crestruc(n);
    display(n);
}