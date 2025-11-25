#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    char data[100];

      fp = fopen("programming.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);
    printf("Enter some text to write to the file: ");
    fgets(data, sizeof(data), stdin);
    fprintf(fp, "%s", data);
    
    fp = fopen("programming.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("Contents of the file:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }
    return 0;
}
    