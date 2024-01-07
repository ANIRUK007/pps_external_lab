#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp, *fd;
    char ch;

    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error opening the file for writing.\n");
        return 1;
    }

    printf("Enter text (press ` to exit):\n");

    while (1) {
        ch = getchar();

        if (ch == '`') {
            break;
        }

        fputc(ch, fp);
    }

    fclose(fp);

    fd = fopen("output.txt", "r");

    if (fd == NULL) {
        printf("Error opening the file for reading.\n");
        return 2;
    }

    printf("\nData read from the file:\n");

    while (1) {
        ch = fgetc(fd);

        if (ch == EOF) {
            break;
        }

        printf("%c", ch);
    }

    fclose(fd);

    return 0;
}
