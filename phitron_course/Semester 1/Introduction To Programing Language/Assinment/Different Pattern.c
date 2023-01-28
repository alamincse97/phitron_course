#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, row, col;
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=row; col>=1; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}

