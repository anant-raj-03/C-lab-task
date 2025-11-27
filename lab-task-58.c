//WAP to copy from one file to another file.
#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char buffer[1024];
    size_t bytesRead;

    sourceFile = fopen("file1.txt", "rb");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }
    destFile = fopen("file2.txt", "wb");
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
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