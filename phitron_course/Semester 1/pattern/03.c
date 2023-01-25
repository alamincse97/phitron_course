/*
Pattern-7
N=3
*
* *
* * *

Pattern-8
N=3
#
# #
# # #
*/
/*
Binary right angle triangle
Pattern-3
N=3
1
1 0
1 0 1
*/
#include<stdio.h>

int main()
{
    int n, row, col;
    scanf("%d", &n);

    for(row = 1; row<=n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", col % 2);
        }
        printf("\n");
    }
}


