/*
Alphabetic right angle triangle
Pattern-5
N=3
A
A B
A B C
*/

#include<stdio.h>

int main()
{
    int n, row, col;
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",  col+64);
        }
        printf("\n");
    }
}
