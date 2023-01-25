#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for (i = rows; i > 0; i--) {
        /* Print spaces before stars in a row */
        for (j = i; j > 0; j--) {
            printf(" ");
        }
        /* Print rows stars after spaces in a row */
        for (j = rows; j > 0; j--) {
            printf("*");
        }
        /* jump to next row */
        printf("\n");
    }
    return 0;
}
