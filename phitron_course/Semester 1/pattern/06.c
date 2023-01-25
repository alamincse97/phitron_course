/*
Alphabetic right angle triangle
Pattern-6
N=3
A
B B
C C C
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
            printf("%c ", row+64);
        }
        printf("\n");
    }
}
