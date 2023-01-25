/*Binary right angle triangle
Pattern-4
N=3
1
0 0
1 1 1
*/
#include<stdio.h>

int main()
{
    int n, row, col;
    scanf("%d", &n);

    for(row=1; row <= n; row++)
    {
        for(col=1; col <= row; col++)
        {
            printf("%d ", row % 2);
        }
        printf("\n");
    }
    return 0;
}
