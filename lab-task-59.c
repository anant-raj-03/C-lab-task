//WAP to read a string into a text file using fputs() function.
#include <stdio.h>
int main() {
    FILE *file;
    const char *str = "This is a sample string to be written to the file.\n";

    file = fopen("file1.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fputs(str, file);
    fclose(file);
    printf("String written to file successfully.\n");
    return 0;
}