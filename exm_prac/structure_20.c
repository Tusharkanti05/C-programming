#include <stdio.h>
#include <string.h>

int main() {
    struct stu {
        int rollNo, year, total, mt, bn, en, cl;
        float avg;
        char na[10], gr[3];
    } s[20];

    int i, n;
    printf("How many records do you want to enter: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter roll: ");
        scanf("%d", &s[i].rollNo);
        printf("Enter name: ");
        scanf("%s", s[i].na);
        printf("Enter class: ");
        scanf("%d", &s[i].cl);
        printf("Enter year: ");
        scanf("%d", &s[i].year);
        printf("Enter math marks: ");
        scanf("%d", &s[i].mt);
        printf("Enter Bengali marks: ");
        scanf("%d", &s[i].bn);
        printf("Enter English marks: ");
        scanf("%d", &s[i].en);

        s[i].total = s[i].bn + s[i].en + s[i].mt;
        s[i].avg = s[i].total / 3.0;

        if (s[i].avg >= 80) {
            strcpy(s[i].gr, "A+");
        } else if (s[i].avg >= 70) {
            strcpy(s[i].gr, "A");
        } else if (s[i].avg >= 60) {
            strcpy(s[i].gr, "B");
        } else if (s[i].avg >= 50) {
            strcpy(s[i].gr, "C");
        } else {
            strcpy(s[i].gr, "D");
        }
    }

    printf("\nRoll No\tName\tClass\tYear\tMath\tBeng\tEng\tTotal\tAvg\tGrade\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\t%s\n", 
            s[i].rollNo, s[i].na, s[i].cl, s[i].year, s[i].mt, s[i].bn, s[i].en, s[i].total, s[i].avg, s[i].gr);
    }

    return 0;
}
