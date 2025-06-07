#include <stdio.h>
int main(){
    FILE * fpw;
    int n,i,r;
    float f;
    char na[10];

    printf("How many record enter : ");
    scanf("%d", &n);

    fpw = fopen("t.txt", "w");
    for(i=1; i<=n; i++){
        printf("Enter your roll : ");
        scanf("%d", &r);
        printf("Enter your name : ");
        scanf("%s", na);
        printf("Enter your fee : ");
        scanf("%f", &f);
        fprintf(fpw, "%d\t%s\t%.2f\n", r, na, f);
    }
    fclose(fpw);
    fpw = fopen("t.txt", "r");
    if (fpw == NULL) {
        printf("file dous't exists\n");
    } else {
        fscanf(fpw, "%d%s%f", &r,na,&f);
        while (!feof(fpw)) {
            printf("%d\t%s\t%.2f", r,na,f);
            fscanf(fpw, "%d%s%f", &r,na,&f);
        }
    }
    fclose(fpw);
    return 0;
}