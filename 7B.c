#include <stdio.h>

void PascalTriangle(int n);

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    if (rows <= 0) {
        printf("Please enter a positive number for rows.\n");
        return 1; // Exit with an error code
    }

    PascalTriangle(rows);

    return 0;
}

void PascalTriangle(int n) {
    int pascalTriangle[100][100]; 

    // Generating Pascal's Triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascalTriangle[i][j] = 1;
            } else {
                pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
            }
        }
    }

    // Printing Pascal's Triangle
    printf("Pascal's Triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascalTriangle[i][j]);
        }
        printf("\n");
    }
}
