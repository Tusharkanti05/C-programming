#include <stdio.h>
void input();
void display();

struct stu {
    int roll;
    char name[20];
    float fee;
} s;

int main(){
    input();
    display();
    return 0;
}
void input(){
    printf("Enter roll : ");
    scanf("%d", &s.roll);
    printf("Enter name : ");
    scanf("%s", s.name);
    printf("Enter fee : ");
    scanf("%f", &s.fee);
}
void display(){
    printf("\nRoll\tName\tFee\n");
    printf("-----------------------\n");
    printf("%d\t%s\t%.2f\n", s.roll, s.name, s.fee);
}