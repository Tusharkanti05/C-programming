#include <stdio.h>
void crestruc();
void display();

struct stu {
    int roll;
    char name[10];
    struct mark {
        int sub;
    } mark[10];
} s[100];

int m, n;

void crestruc(){                                                  
    int i, j;
    for(i=0; i<n; i++){
        printf("Enter roll : ");
        scanf("%d", &s[i].roll);
        printf("Enter name : ");
        scanf("%s", s[i].name);
        for(j=0; j<m; j++){
            printf("Enter marks for subject %d: ", j+1);
            scanf("%d", &s[i].mark[j].sub);
        }
    }
}

void display(){
    FILE *fpw;
    fpw=fopen("D:\\FileSys\\T.txt","w");
    
    int i, j,t;
    float avg;

    printf("\nRoll\tName");
    for(j=0; j<m; j++){
        printf("\tSub%d",j+1);
    }
    printf("\tTotal\tAvg\tDiv\n");


    printf("---------------------------------------\n");
    for(i=0; i<n; i++){
        printf("%d\t%s\t", s[i].roll, s[i].name);
        fprintf(fpw,"%d\t%s\t", s[i].roll, s[i].name);
        for(j=0,t=0; j<m; j++){
            t+=s[i].mark[j].sub;
            printf("%d\t", s[i].mark[j].sub);
            fprintf(fpw,"%d\t", s[i].mark[j].sub);
        }
        avg=(float)t/m;
        printf("%d\t%.2f\t", t,avg);
        fprintf(fpw,"%d\t%.2f\t", t,avg);
        if(avg>=80)
        {
            printf("*");
            fprintf(fpw,"*");
        }
       else if(avg>=60)
            {
                printf("1st");
                fprintf(fpw,"1st");
            }
        else if(avg>=45)
            {
                printf("2nd");
                fprintf(fpw,"2nd");
            }
        else if(avg>=30)
            {
                printf("3rd");
                fprintf(fpw,"3rd");
            }
        else
            {
                printf("Fail");   
                fprintf(fpw,"Fail");
            } 
        printf("\n");
        fprintf(fpw,"\n");
    }
    fclose(fpw);
}

int main(){
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &m);
    crestruc();
    display();
    return 0;
}