#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Write to a file
    file = fopen("example.txt", "w");  // Open file in write mode
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    
    fprintf(file, "Hello, this is a simple file example.\n");
    fclose(file);  // Close the file

    // Read from the file
    file = fopen("example.txt", "r");  // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);  // Print file content
    }
    fclose(file);  // Close the file

    return 0;
}
