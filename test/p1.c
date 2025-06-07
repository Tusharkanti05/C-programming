#include <stdio.h>
int main() {
    int a[20], item, i, loc, n;
    printf("How many data items do you want to enter : ");
    scanf("%d", &n);

    // Create array
    for (i = 0; i < n; i++) {
        printf("Enter data %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Display array
    printf("\nArray elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    // Searching element
    printf("\nEnter the searching data: ");
    scanf("%d", &item);

    for (i = 0,loc = -1; i < n && loc == -1; i++) {
        if (a[i] == item) {
            loc = i;
        } 
    }

    if (loc == -1) {
        printf("Data not found.\n");
    } else {
        printf("Data found at index location %d\n", loc);
    }

    return 0;
}
