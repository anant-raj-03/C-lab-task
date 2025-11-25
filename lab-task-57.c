//WAP to read, write and display the content of the file.
#include <stdio.h>
#include <string.h>
int main() {
    FILE *file;
    char ch;

    file = fopen("file1.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    const char *content = "hello\nmy name is a\ni am learning c\n";
    fwrite(content, sizeof(char), strlen(content), file);
    fclose(file);

    file = fopen("file1.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}