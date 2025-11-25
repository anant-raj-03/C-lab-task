//WAP to copy a binary file from another file.

#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char buffer[1024];
    size_t bytesRead;

    sourceFile = fopen("file1.bin", "rb");
    if (sourceFile == NULL) {
        printf("Error opening file1!\n");
        return 1;
    }
    destFile = fopen("file2.bin", "wb");
    if (destFile == NULL) {
        printf("Error opening file2!\n");
        fclose(sourceFile);
        return 1;
    }
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");
    return 0;
}