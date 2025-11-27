//WAP to check whether the files exist or not?
#include <stdio.h>
int main() {
    FILE *file;
    const char *filename = "file3.txt";

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("The file '%s' does not exist.\n", filename);
    } else {
        printf("The file '%s' exists.\n", filename);
        fclose(file);
    }
    return 0;
}