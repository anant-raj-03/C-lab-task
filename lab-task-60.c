//WAP to read a string into a text file.
#include <stdio.h>
int main() {
    FILE *file;
    char str[100];

    file = fopen("file1.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Contents of the file:\n");
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }
    fclose(file);
    return 0;
}
