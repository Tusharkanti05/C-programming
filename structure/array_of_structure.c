#include <stdio.h>
void creStruc();
void display();

struct stu {
    int roll;
    char name[10];
    float fee;
} s[100];

int n;
void creStruc(){
    int i;
    for(i=0; i<n; i++){
        printf("Enter roll : ");
        scanf("%d", &s[i].roll);
        printf("Enter name : ");
        scanf("%s", s[i].name);
        printf("Enter fee : ");
        scanf("%f", &s[i].fee);
    }
}
void display(){
    int i;
    printf("\nRoll\tName\tFee\n");
    printf("--------------------\n");
    for(i=0; i<n; i++){
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].fee);
    }
}
int main(){
    printf("Enter the number of students : ");
    scanf("%d", &n);
    creStruc();
    display();
    return 0;
}