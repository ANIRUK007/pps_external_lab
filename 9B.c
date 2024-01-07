#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fp;
    char ch;
    int cch = 0, w = 0, l = 0;

    fp = fopen("abc.txt", "r");

    if (fp == NULL) {
        printf("File not found!!!");
        exit(1);
    }

    while (1) {
        ch = fgetc(fp);

        if (ch == EOF) {
            break;
        }

        cch++;

        if (ch == ' ') {
            w++;
        }

        if (ch == '\n') {
            l++;
        }
    }

    printf("Number of characters in the file is %d\n", cch);
    printf("Number of words in the file is %d\n", w+l);
    printf("Number of lines in the file is %d\n", l+1);

    fclose(fp); 
}
